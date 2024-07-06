#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

float distanceBetweenTwoPoints(pair<int, int> f, pair<int, int> s) {
    return sqrt(pow(f.first - s.first, 2) + pow(f.second - s.second, 2));
}

void solve(int f0, int d, vector<pair<int, int>> coor) {
    vector<pair<int, int>> f1;
    pair<int, int> f0coor = coor[f0];
    int countf2 = 0;
    coor.erase(coor.begin() + f0);

    for (int i = 0; i < coor.size(); i++) {
        if (distanceBetweenTwoPoints(coor[i], f0coor) < d) {
            f1.push_back(coor[i]);
            coor.erase(coor.begin() + i);
            i--;
        }
    }

    for (auto p : f1) {
        for (int i = 0; i < coor.size(); i++) {
            if (distanceBetweenTwoPoints(coor[i], p) < d) {
                countf2++;
                coor.erase(coor.begin() + i);
                i--;
            }
        }
    }

    cout << f1.size() << " " << countf2;
}

int main() {
    int n, f0, d, x, y;
    vector<pair<int, int>> coor;
    cin >> n >> f0 >> d;

    while (n--) {
        cin >> x >> y;
        coor.push_back({x, y});
    }

    solve(--f0, d, coor);
    return 0;
}