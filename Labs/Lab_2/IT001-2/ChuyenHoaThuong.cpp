#include <iostream>
#include <string>
using namespace std;
string st;
int main()
{
    cin >> st;
    int n = st.length();
    for (int i = 0; i<n; i++)
    {
        if ((st[i]>='a') && (st[i] <= 'z'))
                st[i]=((st[i])-32);
        else
        if ((st[i]>='A') && (st[i] <= 'Z'))
                st[i]=((st[i])+32);
    }
    cout << st;
    return 0;
}
