#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double Sum1(int n)
{
    double S1 = 0;
    for(int i=1;i<=n;i++)
    {
        S1= S1 + (pow(i, i));
    }
    return S1;
}

long long Giai_thua(int n)
{
    if (n == 0 or n == 1)
        return 1;
    return n * Giai_thua(n-1);
}

double Sum2(int n)
{
    double S2 = 0;
    for(int i = 1; i <= n; i++)
        S2 = S2 + Giai_thua(i);
    return S2;
}

double Sum3(int n)
{
    double S3 = 0.0;
    int64_t temp = 0;
    for(int i = 1; i <= n; i++)
    {
        temp = temp + i;
        S3 = S3 + 1.0/temp;
    }
    return S3;
}

int main ()
{
    int n;
    cin >> n;
    cout << Sum1(n);
    cout << endl << endl;
    cout << Sum2(n);
    cout << endl << endl;
    cout << Sum3(n) << endl;
    return 0;
}
