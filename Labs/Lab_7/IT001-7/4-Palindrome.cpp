#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
int n2;


void reverse(int n)
{
    int r = 0, t;
    while (n>0)
    {
        t = n%10;
        r = r*10 + t;
        n = n/10;
    }
    n2 = r;
}

int main()
{
    int n;
    cin >> n;
    reverse(n);
    if (n == n2)
        cout << "true";
    else
        cout << "false";
}
