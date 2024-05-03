#include <iostream>
#include <cmath>
using namespace std;
long long m,d,S,i,r;

int Input()
{
    cin >> m;
        return m;
}

int sum_even_divisor(int n)
{

    S=0;
    if (n == 2)
        return 2;
    if (n == 4)
        return 6;
    int sqr=sqrt(n);
    if  (sqr*sqr == n)
    {
        for (int i=2; i<= (n/2); i++)
        if (n%i == 0 and i%2 == 0) S= S + i;
    }
    
    else if (sqr*sqr != n)
    {
        for (int i=2; i<= (int)sqrt(n); i++)
        if (n%i == 0 and i % 2 == 0) d=d+1;
        if (d==0) S=0;
    }
    
    if (d!=0)
    for (int i = 2; i <= (n); i++)
    {    if (n % i == 0 and i % 2 == 0)
            S = S + i;
    }
    if (S != 0)
        return S;
    else return -1;

}

int main()
{
    int n;
    n = Input();
    cout << sum_even_divisor(n);
}


