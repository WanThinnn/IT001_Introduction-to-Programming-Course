#include <iostream>
using namespace std;
int a[1000], n, d;

void nhap(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

bool xuly()
{
    for (int i = 0; i < n/2; i++)
    {
        if (a[i] == a[n - i - 1])
            d++;
    }
    if (d == n/2)
        return true;
    return false;
}

int main()
{
    nhap(a, n);
    cout << xuly();
    cout << endl;
}
