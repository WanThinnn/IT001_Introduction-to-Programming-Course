
#include <iostream>
#include <iomanip>
using namespace std;
int n = 0;
double a, x, S, temp = 1;

double F(double x, int n)
{
 if (n % 2 == 0)
     a = 1;
 else
     a = -1;

 for (double i = 1; i <= 2 * n + 1; i++)
     temp = temp * (x / i);
 return a * temp;
}

int main()
{
 cin >> x;
 while (abs(F(x, n)) >= 0.00001)
 {
     S = S + F(x, n);
     n++;
 }
 cout <<  setprecision(4) << fixed << S << endl;
 return 0;
}


