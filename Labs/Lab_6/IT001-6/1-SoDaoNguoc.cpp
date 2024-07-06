#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


int reverse(int n)
{
    int r = 0, t;
    while (n>0)
    {
        t = n%10;
        r = r*10 + t;
        n = n/10;
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
}
