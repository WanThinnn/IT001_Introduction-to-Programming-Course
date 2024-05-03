#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n, S = 0;
    cin >> n >> m;
    S = (n + m) * (n - 1) - (2 * n + 2) * (n - 1) / 2;
    cout << S;
}
