#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int n, m;
    cin >> n >> m;
    float a[n][m];
    for (int i=0; i<n;i ++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int n1, m1; cin >> n1 >> m1;
    float b[n1][m1];
    for (int i=0; i<n1;i ++){
        for (int j=0; j<m1; j++){
            cin >> b[i][j];
        }
    }
    float c[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            c[i][j]=a[i][j]+b[i][j];
            cout << c[i][j] << " ";
        } cout << endl;
    }
    
    
}
