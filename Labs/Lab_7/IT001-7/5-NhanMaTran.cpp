#include <bits/stdc++.h>
using namespace std;
int n,m,l,k;
main()
{
    cin >> m >> n;
    float a[m][n];
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            cin >> a[i][j];
            
    cin >> l >> k;
    float b[l][k];
    for (int i=0;i<l;i++)
        for (int j=0;j<k;j++)
            cin >> b[i][j];
            
    float res[m][k];
    memset(res,0,sizeof(res));
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<k;j++)
        {
            for(int t=0;t<n;++t)
                res[i][j] = res[i][j] + (a[i][t]*b[t][j]);
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }


}
