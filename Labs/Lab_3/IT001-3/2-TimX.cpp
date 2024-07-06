#include <iostream>
#include <stdio.h>
using namespace std;
int n, X, i, d = 0;

int main ()
{
    cin >> n;
    int a[n];
    int b[d];
    for (i =1; i <= n; i++)
        cin >> a[i];
    cin >> X;
    
    for (i = 1; i <= n; i++)
        if (X == a[i])
        {
            d++;
            b[d] = i;
        }
    if (d == 0) cout << "NO";
    else
    for (i = 1; i <= d; i++)
        cout << b[i] << " ";
}
