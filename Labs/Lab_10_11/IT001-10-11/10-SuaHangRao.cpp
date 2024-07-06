#include <iostream>
#include <algorithm> 
using namespace std;

int const N = 1e5 + 5;
int n, m, a[N], b[N], res = 0, sl = 0;

bool check(int x)
{
	int j = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (a[i] < x)
		{
			j++;
			while (j <= m)
			{
				if (a[i] + b[j] >= x)
					break;
				j++;
			}
			if (a[i] + b[j] < x) return false;
			cnt++;
		}

	sl = cnt;
	return true;
}

void back_track()
{
	int j = 0;
	for (int i = 1; i <= n; i++)
		if (a[i] < res)
		{
			j++;
			while (j <= m)
			{
				if (a[i] + b[j] >= res)
					break;
				j++;
			}
			cout << i << " " << j << endl;
		}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++) cin >> b[i];

	int l = 0, r = 2 * 1e8;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << res << " " << sl << endl;
	back_track();
}