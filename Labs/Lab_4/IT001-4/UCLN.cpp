#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a,b;
void nhap()
{
    cin >> a >> b;
}

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
 

int main()
{
    nhap();
    cout << gcd(a,b);
}
