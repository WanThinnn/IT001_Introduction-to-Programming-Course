#include <iostream>
#include <cmath>
using namespace std;
float a, b, c;
double S, P;
int main()
{
    cin >> a >> b >> c;
    P=((a+b+c)/2);
    S=sqrt(P*(P-a)*(P-b)*(P-c));
    cout << round(S * 100) / 100 << endl;
}
