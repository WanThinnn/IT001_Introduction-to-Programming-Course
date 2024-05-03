#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int a,k,b,m;
int d1, d2 = 0, d, c;
int i = 1;
int A[1000], B[1000];
int main ()
{
    int j = 0;
    int w = 0;
    int d3 = 0;
    //cin >> k >> m;
    while (d3 <= 25 )
    {
        if (i % 3 != 0)
        {
            w++;
            B[w] = i;
            d2 = d2+ 3;
        }
        
        if (i % 4 != 0)
        {
            d1 = d1 + 2;
            j++;
            A[j] = i;
            
        }
        d3 = d1 + d2;
        i++;
        }
    
    for (i = 1; i <= j; i++) cout << A[i] << " ";
    cout << endl;
    for (i = 1; i <= w; i++) cout << B[i] << " ";
    cout << endl;
    cout << d1 << " " << d2 << " " << d3 << endl;
}
