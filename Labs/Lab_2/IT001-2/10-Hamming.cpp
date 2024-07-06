#include <string>
#include <iostream>
using namespace std;
string s1, s2;
int d;
int main()
{
    cin >> s1;
    cin >> s2;
    
    long long n = s1.length();
    long long m = s2.length();
    
    while (m < n)
    {
        s2 = '0' + s2;
        m++;
    }
    
    while (n < m)
    {
        s1 = '0' + s1;
        n=n+1;
    }
        
    for (int i = 0; i< n; i++)
            if (s1[i] != s2[i]) d++;
    
    cout << d;
    return  0;
}
