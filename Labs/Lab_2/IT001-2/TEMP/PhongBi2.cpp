#include <iostream>
#define Var long double
using namespace std;
long long xuly(Var m, Var n, Var h,Var  w)
{
    Var d = 0;
    if (h > w) swap(h, w);
    if (m > n) swap(m, n);
    while ((m > h) || (n > w))
    {
        if (n > w)
        {
            n /= 2;
            d ++;
        }
        if (m <= w and n <= h) return d;
        if (m <= w)
        {
            while (n > h)
            {
                n /= 2;
                d ++;
            }
            return d;
        }
        if (m > h)
        {
            m /= 2;
            d++;
        }
        if (m <= w and n <= h) return d;
    }
    return d;
}

int main()
{
    Var m, n, h, w;
    cin >> m >> n >> h >> w;
    cout << xuly(m, n, h, w);
    return 0;
}
