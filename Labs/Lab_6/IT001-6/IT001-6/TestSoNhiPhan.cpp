
#include <iostream>

using namespace std;

int main()
{
    auto n = 16;
    auto m = 1 << n;
    cout << m;
    cout << endl;
    for (auto i = 0; i<m; i++)
    {
        for (auto j = n-1; j>=0;j--)
            cout << ((i >> j)&1);
        cout << endl;
    }
    return 0;
}
