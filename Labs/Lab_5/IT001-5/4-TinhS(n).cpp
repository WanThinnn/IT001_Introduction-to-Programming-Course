#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float n, S =0;
int i;


float calculate(float n)
{
    if (n == 1)
        return sqrt(1);
    if (n == 2)
        return sqrt(3);
    return sqrt(n + calculate(n-1));
}

int main()
{
    cin >> n;
    cout << setprecision(2) << fixed << calculate(n);
}
