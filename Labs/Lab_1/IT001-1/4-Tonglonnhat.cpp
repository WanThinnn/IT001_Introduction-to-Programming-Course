#include <iostream>
using namespace std;

int n, res = 0, mn = 101, mx = 0;
int a[100005];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (i % 2 == 1)
		{
			res = res + a[i];
			mn = min(mn, a[i]);
		}
		else
		{
			res -= a[i];
			mx = max(mx, a[i]);
		}
	}
    //cout << res << " " << mn << " " << mx << endl ;
	if (mn < mx) res = res - mn + mx + mx - mn;
	cout << res;
	return 0;
}