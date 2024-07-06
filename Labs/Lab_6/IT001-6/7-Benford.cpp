#include <iostream>
#include <cmath>
using namespace std;
#define MAX 100
int b[MAX], temp, k, i, m;


void Nhapmang(int a[MAX], int &n)
{
    for (int i =1; i<=n; i++)
        cin >> a[i];
}

bool isBenford(int a[MAX], int &n)
{
    
    for (i = 1; i <= n; i++)
    {
        do
        {
            temp = a[i] % 10;
            a[i] /= 10;
            b[i] = temp;
        }
        while (a[i] > 0);
    }
    
    for (i = 1; i <= n; i++)
    {
        if (b[i] == 1)
            m++;
        if (b[i] == 4)
            k++;
    }
    if (m == 3 and k == 1)
        return true;
    return false;
}


int main()
{
    int a[MAX], n = 4;
    Nhapmang(a,n);
    if (isBenford(a,n) == true)
        cout << "True";
    else
        cout << "False";
    return 0;
}
