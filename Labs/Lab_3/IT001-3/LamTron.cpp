#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
double a,b, P, tam, S;
int d,n;
int main()
{
    cin >> a >> b;
    tam = round(a*b);
    S = tam/b;
    n = (to_string(int(S)).length());
    cout << setprecision(10) << S << endl;
}
