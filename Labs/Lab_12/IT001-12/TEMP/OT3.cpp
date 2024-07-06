#include <iostream>
using namespace std;

int a[1000][1000], b[1000], n, m, t;

void nhap(int a[1000][1000], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void xuly()
{
    int i, j,t, max;
    for (i = 0; i < m; i++)
    {
        max = a[i][0];
        for (j = 1; j < n; j++)
        {
            if (a[i][j] > max)
             max = a[i][j];
        }
        b[i] = max;
    }

}


int main()
{
    nhap(a,m,n);
    xuly();
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";
    
}
