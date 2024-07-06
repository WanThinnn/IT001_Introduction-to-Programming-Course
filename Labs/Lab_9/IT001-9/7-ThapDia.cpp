#include <bits/stdc++.h>
using namespace std;
bool w[1000006];
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int N; 
    cin >> N;
    int temp = N;
    while (N--) 
    {
        int a; 
        cin >> a;
        w[a] = true;
        while (temp > 0 && w[temp]) 
            cout << temp-- << ' ';
        cout << '\n';
    }
}