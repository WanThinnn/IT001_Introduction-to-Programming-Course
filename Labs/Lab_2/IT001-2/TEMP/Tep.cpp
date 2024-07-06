#include <iostream>
using namespace std;
int main ()
{
    int a;
freopen ("baitap.inp", "r", stdin);
freopen ("baitap.out", "w", stdout);

cin >> a;
int c = a % 10;
int d = a / 10;
cout << c + d;

}
