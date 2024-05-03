#include <iostream>

using namespace std;

int main()
{
    int x;
    int* p;
    p = new int[10];
    *p = 5, *(p+1) = 7;
    cout << p[0] << " " << p[1];
    delete []p;
    return 0;
}
