#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string s;
vector <long long> a(26);

long long xuly(long long k)
{
    return k*(k-1)/2;
}

int main()
{
    cin >> s;
    bool t = false;
    long long res = xuly(s.size());
    
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i]] = a[s[i]] + 1;
        if (a[s[i]]>=2)
            t = true;
    }
    
    for (auto i = 'a'; i <= 'z'; i++)
        res = res - xuly(a[i]);
    if (t == true)
        cout << res+1;
    else
        cout << res;
}

//Cach 2
int q[26] = {0};

for (auto ch:s)
    q[ch - 'a']++;

