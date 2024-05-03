#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
int64_t i,n,S=1;

int main()
{
    int n;
    cin >> n;
    if (n < 1 or n == 0 or n == 1)
        S = 1;
    else if (n > 1)
    {
        if (n%2 == 0)
            for (i = 2; i<=n; i=i+2)
                S = S*i;
        else if (n%2 != 0)
            for (i = 3; i<=n; i=i+2)
                S = S*i;
    }
    cout << S;
}
