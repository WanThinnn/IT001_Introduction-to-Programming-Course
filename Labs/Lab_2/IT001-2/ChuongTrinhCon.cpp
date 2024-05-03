#include <stdio.h>
#include <iostream>
int S, O, n, m;
using namespace std;

void nhap(int &t, int &d, int &k)
{
    freopen ("baitap.inp", "r", stdin);
    cin >> t;
    cin >> d >> k;
}

void sum(int &P, int a, int b, int c)
{
    P = a + b + c;
}

void xuat(int P)
{
    freopen ("baitap.out", "w", stdout);
    cout << P << endl;
}


int main()
{
    nhap(n,m, O);
    sum(S, m, n, O);
    xuat(S);
}
