#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int cnt[26];
string s;

int main()
{


    int tests = 0;
    cin >> tests;
    while (tests--)
    {
        ll k;
        cin >> k;

        int ans_m = -1, ans_n = -1;
        for(int m = 1; 1LL * m * m < k; ++m)
        {
            ll delta = k * 2 - m - 1;
            if (delta % (2LL * m + 1))
                continue;

            static_cast<void>(ans_m = m), ans_n = delta / (2LL * m + 1);
        }

        cout << ans_m << ' ' << ans_n << '\n';
    }
    return 0;
}
