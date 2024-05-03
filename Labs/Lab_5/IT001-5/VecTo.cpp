#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int> a(n), gcdL(n, 0), gcdR(n, 0);
    for (auto &x: a)
        cin >> x;
    
    gcdL[0] = a[0];
    for (i = 1; i < n; i++)
        gcdL[i] = __gcd(gcdL[i-1], a[i]);
    
    gcdR[n-1] = a[n-1];
    for (i = n-2; i >= 0; i--)
        gcdR[i] = __gcd(gcdR[i+1], a[i]);
    
}
