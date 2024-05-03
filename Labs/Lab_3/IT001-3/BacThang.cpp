#include <iostream>
#include <string>
#include <cmath>
#define l long long
using namespace std;
l i, n, d, S = 0, S2 = 0, T;
int main ()
{
    cin >> n;
    l k = (to_string(n)).length();
    if (n == 1)
        cout << 1 << endl;
    else if (n != 1)
    {
        d = k;
        for (i = d; i > 1; i--)
            {
                S = S + d*9*pow(10, d-2);
                d--;
            }
        
        T = ((pow(10,k)-1)-(n))/10;
        S2 = k*T;
        
        if ((n%10 == 0))
            cout << S+1-S2 << endl;
        else
            cout << S+1+k-S2 << endl;
    }
}
