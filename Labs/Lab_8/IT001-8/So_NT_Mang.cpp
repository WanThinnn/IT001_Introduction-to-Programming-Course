#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int a[10000], b[10000] = {0};
int n, d, k = 0;

void Input(int a[10000], int &n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

bool IsPrime(int x)
{
    int i, m = sqrt(x);
    if (x < 2)
        return false;
    else if (x < 4)
        return true;
    for (d = 0, i = 2; i <= m; i++)
        if (x%i == 0)
            return false;
    return true;
}

void Solve()
{
    int i;
    for (d = 0, i = 1; i <= n; i++)
        if (IsPrime(a[i]) == true)
        {
            k++;
            b[k] = a[i];
        }
    if (k != 0)
    {
        for (int i = 1; i <= k; i++)
            cout << b[i] << " ";
    }
    else cout << 0;
}


int main()
{
    Input(a, n);
    Solve();
}
