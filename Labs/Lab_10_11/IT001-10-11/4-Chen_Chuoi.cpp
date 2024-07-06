#include <iostream>
#include <string>
using namespace std;
int k;
int main ()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cin >> k;
    int64_t n = str1.length();
    if (k >= 0 and k <= n)
    {
        str1.insert(k, str2);
        cout << str1 <<endl;
    }
    else cout << "Vi tri " << k <<  " khong thoa dieu kien.";
}
