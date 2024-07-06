#include <iostream>

using namespace std;

typedef long long ll;

ll f(ll n)
{
    ll res = 0;
    for (ll x = 2; x <= n; x *= 2)
        res += n / x;

    return res;
}

int main()
{
    ll l, r;
    cin >> l >> r;
    cout << f(r) - f(l - 1);
    return 0;
}
