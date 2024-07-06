#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
int a, b, M, m, ttd;
int main()
{
    cin >> a >> b;
    ttd = abs((a - b));
    M = (((a+b)+ttd)/2);
    m = (((a+b)-ttd)/2);
    cout << "max = " << M << endl << "min = " << m;
}