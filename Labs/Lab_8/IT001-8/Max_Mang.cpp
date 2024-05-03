#include <iostream>

using namespace std;
int a[10000], n, d;

void Input(int a[10000], int &n)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void Sort(int a[1000], int &n)
{
    for (int i = 1; i <= n - 1; i++)
        for (int j = n; j > i; j--)
            if (a[j-1] > a[j])
                Swap(a[j-1], a[j]);
}


int Solve()
{
    for (int i = 1; i <= n; i++)
        if (a[i] == a[n])
            d++;
    return d;
}


int main()
{
    Input(a, n);
    Sort(a, n);
    cout << a[n];
    cout << endl;
    cout << Solve();
}
