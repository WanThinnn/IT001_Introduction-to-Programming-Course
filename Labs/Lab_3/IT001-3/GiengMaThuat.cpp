#include <stdio.h>
#include <iostream>
using namespace std;
int a,b,n,i,j,k, P = 0;
int main()
{
    i = 1;
    cin >> a >> b;
    cin >> n;
    for (i = 1; i <= n; i ++)
    {
        P = P + a*b;
        a++;
        b++;
    }
    cout << P << endl;
}
