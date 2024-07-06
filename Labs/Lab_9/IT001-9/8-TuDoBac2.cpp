#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int prime[10006], cnt = 0;
bool nprime[100006];
void sieve(int block) {
    prime[++cnt] = 2;for(int i = 3; i * i <= block; i += 2)
    if (!nprime[i / 2])
    for(int j = i * i; j <= block; j += 2 * i) nprime[j / 2] = true;

    for(int i = 3; i <= block; ++i)
    if (!nprime[i / 2]) prime[++cnt] = i;
}

int delta[5006];
bool tick[100006];
vector<int> P[5006], tmp;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int l, r; cin >> l >> r;
    int ans = 0;

    sieve((int) sqrt(r));

    for(int i = l; i <= r; ++i) {
        int x = i;
        for(int j = 1; j <= cnt; ++j) {
            int p = prime[j];
            if (x % p == 0) {
                P[i - l + 1].push_back(p);
                while (x % p == 0) x /= p;
            }
        }

        delta[i - l + 1] = x;
    }

    for(int i = l; i <= r; ++i) {
        bool ok = true;
        for(int p: P[i - l + 1])
        if (i % (p * p) == 0) ok = false;

        if (!ok) continue;
        tmp.push_back(i);
    }

    for(int i = 0; i < (int) tmp.size(); ++i) {
        int b = tmp[i];

        for(int p: P[b - l + 1]) tick[p] = true;

        for(int j = 0; j < i; ++j) {
            bool ok = true; int a = tmp[j];

            for(int p: P[a - l + 1])
            if (tick[p]) {
                ok = false;
                break;
            }

            ok &= delta[a - l + 1] == 1 || delta[b - l + 1] == 1 || delta[a - l + 1] != delta[b - l + 1];

            ans += ok;
        }

        for(int p: P[b - l + 1]) tick[p] = false;
    }

    cout << ans;
 return 0;
}