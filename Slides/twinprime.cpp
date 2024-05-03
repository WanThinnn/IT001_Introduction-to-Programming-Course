#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int);

int main()
{
    int n, d, x;
    cin >> n;

    for (d=0, x=3; x < n-2; x += 2)
        d += (IsPrime(x)&& IsPrime(x+2));
    //cout << ......
    return 0;
}

//ver 2.0
bool IsPrime(int m)
{
    int i, m2;
    if (m % 2 == 0)
        return false;
    m2 = sqrt(m);
    for (i=3; i<=m2; i += 2)
        if (m % i == 0)
            return false;
    return true;
}

/*ver 1.5
bool IsPrime(int m)
{
    int i, m2;
    m2 = sqrt(m);
    for (i=2; i<=m2; i++)
        if (m % i == 0)
            return false;
    return true;
}
*/

/*ver 1.0
bool IsPrime(int m)
{
    int d, i;
    for (d=0, i=1; i<=m; i++)
        d += (m%i==0);
    return (d == 2);
}
*/

