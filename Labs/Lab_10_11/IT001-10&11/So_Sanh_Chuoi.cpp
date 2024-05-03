#include<iostream>
#include<set>
using namespace std;
int n;
string st;
set<string> S;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        S.insert(st);
    }
    cout << S.size();
}
