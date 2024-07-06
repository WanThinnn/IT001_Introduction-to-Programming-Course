#include <bits/stdc++.h>
#define ll long long
using namespace std;
int A[100006];
ll sum[100006];

int main() 
{
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    int n, c, k; 
    cin >> n >> c >> k;
    for (int i = 1; i <= n; ++i) 
    {
        cin >> A[i];
        if (A[i] > c) 
            --i, --n;
    }

    sort(A + 1, A + n + 1);
    int t = 0;
    for(int i = 1, j = 1; i <= n; ++i)
    if (i == n or A[i] != A[i + 1]) 
    {
        A[++t] = A[i];
        sum[t]= sum[t - 1] + 1LL * A[i] * (i - j + 1);
        j = i + 1;
    }
ll ans = 8e18; n = t;
    if (n==0) 
    {
        cout<<0;
        return 0;
    }

    if (A[1] > k or A[n] <= c - k) 
        ans = 0;

    for (int i = 2; i <= n; ++i)
    if (A[i] - A[i - 1] > k + 1) 
    {
        ans = 0;
        break;
    }

    if (ans==0) 
    {
        cout << 0; 
        return 0;
        
    }

    for (int i = 1; i <= n; ++i) 
    {
        if (A[i] <= c - k + 1) 
        {
            int p = upper_bound(A + i, A + n + 1, A[i] + k - 1) - A - 1;
            ans = min(ans, sum[p] - sum[i - 1]);
        }

        if ((i > 1 and A[i] - A[i - 1] > 1 and A[i - 1] <= c - k) or (i == 1 and A[i] > 1))  
        {
            int l = 1;
            if (i > 1) l = A[i - 1] + 1; 
            int p = upper_bound(A + i, A + n + 1, l + k - 1) - A - 1;
            ans = min(ans, sum[p] - sum[i - 1]);
        }

        if (A[i] >= k) 
        {
            int p = lower_bound(A + 1, A + i + 1, A[i] - k + 1) - A;
            ans = min(ans, sum[i] - sum[p - 1]);
        }

        if ((i < n and A[i + 1] - A[i] > 1 and A[i + 1] > k) or (i == n && A[i] < c)) 
        {
            int r = c;
            if (i < n) 
                r = A[i + 1] - 1;
            int p = lower_bound(A + 1, A + i + 1, r - k + 1) - A;
            ans = min(ans, sum[i] - sum[p - 1]);
        }
    }
    cout << ans;
}