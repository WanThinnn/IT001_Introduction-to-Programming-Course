#include <iostream>
#include <string>
using namespace std;
int X;
string s;
long long n;
int main()
{
    cin >> X;
    s = to_string(X);
    n = s.length();
    sort(s.begin(), s.end(), less<int>());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            cout << s[i];
        }
    }
    cout << endl;
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    long long num = stoi(s);
    cout << num - 1 << endl;
}
