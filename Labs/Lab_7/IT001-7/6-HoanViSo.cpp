#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string res;
    sort(s.begin(), s.end(), std::greater<int>());
    res = res + s;
    res = res + '\n';
    
    while(prev_permutation(s.begin(), s.end()))
    {
        res = res + s;
        res = res + '\n';
    };
     
    cout << res;
}
