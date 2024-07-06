#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i*i <= n)
    {
        if (i*i == n)
        {
            cout << 1;
            return 0;
        }
        i++;
    }
    cout << 0;
}
