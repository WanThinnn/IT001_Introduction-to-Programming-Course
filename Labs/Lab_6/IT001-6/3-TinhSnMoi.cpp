#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float calculate(int);

int main()
{
    int n;
    cin >> n;
    cout << setprecision(3) << calculate(n);
}

float calculate(int n)
{
    if (n==0)
        return 0;
    if (n == 1)
        return sqrt(1);
    if (n == 2)
        return sqrt(3);
    return sqrt(n + calculate(n-1));
}
