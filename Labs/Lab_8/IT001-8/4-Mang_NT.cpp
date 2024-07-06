#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100


void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

int D, r, d, k;

bool IsPrime(int x)
{
    int i, m = sqrt(x);
    if (x < 2)
        return false;
    else if (x < 4)
        return true;
    for (d = 0, i = 2; i <= m; i++)
        if (x%i == 0)
            return false;
    return true;
}

void NhapmangSNT(int a[], int &n)
{
    cin >> n;
    for (int i = 2; i <= 1000; i++)
    {
        if (IsPrime(i) == true)
            {
                k++;
                a[k] = i;
            }
        if (k == n)
            break;
    }
}


int SoPhanTuChuaY(int a[], int n,int y)
{
    for (int i = 1; i <= k; i++)
        {
            int temp = a[i];
            while (temp > 0)
            {
                r = temp%10;
                if (r == y)
                {
                    D++;
                    temp = 0;
                }
                else
                    temp = temp/10;
            }
        }
    return D;
}

int main()
{
    int a[MAX], n, y;
    cin >>y;
    NhapmangSNT(a,n);
    cout << SoPhanTuChuaY(a, n, y) << endl;;
    return 0;
}
