#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int a, b, c;
double S, P;
int main()
{
    cin >> a >> b >> c;
    P=((a+b+c)/2);
    S=sqrt(P*(P-a)*(P-b)*(P-c));
    cout << setprecision(2) << fixed << round(S * 100) / 100;
}