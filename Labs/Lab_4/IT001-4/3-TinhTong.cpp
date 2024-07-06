
#include <iostream>
#include <stdio.h>
using namespace std;
int a[100000], n,X,d=0;
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> X;
}

void xuly()
{
    for (int i = 1; i <= n - 1 ; i ++)
        for (int j = i+1; j <= n; j ++)
            if (X == a[i] + a[j])
                d = d + 1;
        
    if (d == 0)
            cout << "NO";
    else
            cout << "YES";
}

int main()
{
    nhap();
    xuly();
}
