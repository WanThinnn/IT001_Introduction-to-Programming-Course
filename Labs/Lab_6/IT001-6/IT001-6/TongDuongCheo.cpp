#include <cmath>
#include <iostream>

using namespace std;
float a[1000][1000];
int   n;
float S;

int main()
{
    cin >> n >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j<=n; j++)
            cin >> a[i][j];
    
    for (int i = 1; i <= n; i++)
            S =  S + a[i][i];
    cout << S;
    return 0;
}

