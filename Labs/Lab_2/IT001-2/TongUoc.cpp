#include <iostream>
#include <cmath>
using namespace std;
int n, t,d,S,i,r;
int main()
{
    cin >> n;
    S=0;
    int sqr=sqrt(n);
    if  (sqr*sqr == n)
    {
        for (int i=2; i<= (n/2); i++) 
        if (n%i == 0) S= S + i;
    }
    
    else if (sqr*sqr != n)
    {
        for (int i=2; i<= (int)sqrt(n); i++)
        if (n%i == 0) d=d+1; 
        if (d==0) S=0;
    }
    
    if (d!=0)
    for (int i = 2; i <= (int)sqrt(n); i++) 
    {    if (n % i == 0)  
        S = S + i+n/i;
    }
    S=S+1;
    cout << S;
}



