#include <iostream>
using namespace std;
long long a,b,c,d;
int main ()
{
    cin >> a >> b >> c >> d;
    long long dem = 0, S1=a*b, S2=c*d;
    if ((a<=c) && (b<=d)) dem =0;
    else if ((a<=d) && (b<=c)) dem =0;
    else if (S1 <= S2) dem =0;
    else
        while (S1 > S2)
    {
        S2 = S2*2;
        dem++;
    }
    cout << dem;
    return 0;
}

