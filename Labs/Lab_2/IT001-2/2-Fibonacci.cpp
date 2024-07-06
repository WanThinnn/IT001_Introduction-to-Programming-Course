#include <iostream>
using namespace std;

long long fibonacci(int n) 
{
    if (n < 0) 
    {
        return -1;
    } 
    else if (n == 0 || n == 1) 
    {
        return n;
    } 
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() 
{
 int a;
    cin >> a;
    cout << fibonacci(a);
}


