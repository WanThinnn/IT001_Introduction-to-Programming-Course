#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
    int x;
    cin >> x;
    if (x < 1 || x>30)
        cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
    else
    {
        cout << Fibo(x) << endl;
    }
    return 0;
}

int Fibo(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a = 0;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
