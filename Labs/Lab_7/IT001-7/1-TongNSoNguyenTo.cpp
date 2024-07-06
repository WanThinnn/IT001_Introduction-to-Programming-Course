#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int S, n, K = 1, i = 2;



bool IsPrime(int N)
{
    int t = sqrt(N), d = 0;
    for (int i = 2; i <= t; i ++)
      if (N%i==0)
          d++;
    if (d == 0)
        return true;
    return false;
}

void Process()
{

    while (K <= n)
    {
        if (IsPrime(i) == true)
        {
            S = S + i;
            K++;
        }
        i++;
    }
}

int main()
{
    cin >> n;
    if (n <= 0 or n > 50)
    {
        do
        {
            cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
            cin >> n;
        }
        while (n <= 0 or n > 50);
    }
    {
        Process();
        cout << "Tong " << n << " so nguyen to dau tien la: " << S << endl;
    }
}
