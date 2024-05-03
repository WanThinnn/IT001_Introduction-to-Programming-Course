#include <iostream>
#include <algorithm>
using namespace std;
long long n, d, j, i, k;
string s1, s2;
int main()
{
    cin >> s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    cout << ((s2 == s1)?"YES":"NO");
}
