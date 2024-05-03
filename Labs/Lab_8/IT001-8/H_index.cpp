#include <stdio.h>
#include <iostream>
#include <algorithm>
#define MAX 500000
using namespace std;
int a[MAX], n, d = 1, kq;


void Input(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i <= n-1; i++)
        cin >> a[i];
}


void Output()
{
    for (int i = 0; i <= n-1; i++)
        cout << a[i] << " ";
    cout << endl;
}

int Solve()
{
    sort(a+0, a+n);
    if (n == 0)
        return 0;
    if (a[0] >= n)
        return n;
    int high = n - 1, low = 0, mid, candidate = 0;
    while (low <= high)
    {
        mid = low + (high-low)/2;
        if (a[mid] >= n - mid)
        {
            candidate = n - mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return candidate;
}


int main()
{
    Input(a, n);
    cout << Solve();
}
