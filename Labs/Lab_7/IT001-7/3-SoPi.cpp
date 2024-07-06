#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S = 0;
int n,i;

void SumPi()
{
    for (i = 0; i <= n; i++)
        S = S + (pow(-1,i)/(2*i+1));
}

int main()
{
    cin >> n;
    SumPi();
    S = 4*S;
    cout <<  setprecision(6) << S << endl;
    return 0;
}
