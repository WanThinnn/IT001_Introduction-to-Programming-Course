#include <algorithm>
#include <iostream>
using namespace std;
int a[1000];
int n, d;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << a[n-1];
    cout << endl;
    for (int i = 0; i < n; i++)
        if (a[i] == a[n-1])
            d++;
    cout << d;
}
