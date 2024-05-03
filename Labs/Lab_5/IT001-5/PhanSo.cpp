#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int a,b,c,d,t, T, S;

void xuly()
{
    if (a+2 == c and b+2 == d)
        T = 2;
    else
    if (a < b and c < d and a >= 0 and b >= 0 and c >= 0 and d >= 0 
    and a < 100000 and b <= 100000 and c < 100000 and d <= 100000)
    {
        while ((a != c) or (b != d))
        {
            {
                t = __gcd(a+1,b+1);;
                a = (a+1)/t;
                b = (b+1)/t;
                T++;
                if (a == c and b == d)
                        break;
                else if (a >= 100000 and b > 100000)
                    {
                        T = 0;
                        break;
                    }
            }
        }
    }
    else T = 0;
}


int main()
{
    cin >> a >> b >> c >> d;
    xuly();
    cout << T;
}
