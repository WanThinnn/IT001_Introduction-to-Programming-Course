#include <iostream>
#include <cmath>
int d, n, x, a[10000], t = 1;
using namespace std;

void nhap(int &t)
{
    cin >> t;
}


bool IsPrime(int m)
{
    int d, i, m2 = sqrt(m);
    if (m%2==0)
        return false;
    for (d = 0, i=3; i <= m2; i+=2)
        if (m%i == 0)
            return false;
    return true;
}


int xuly()
{
    
    for (d=0, x = 3; x < n-2; x+=2)
        if (IsPrime(x) && IsPrime(x+2) == true)
        {
            a[t] = x;
            a[t+1] = x+2;
            t=t+2;
            d = d+1;
        }
    return d;
}

int xuat()
{
    return d;
}


int main()
{
    nhap(n);
    xuly();
    for (int j = 1; j < t-1; j=j+2) cout << a[j] << ", " << a[j+1] << endl;
    cout << "Tong: " << xuat() << " cap so sinh doi < " << n << endl;
    return 0;
}
