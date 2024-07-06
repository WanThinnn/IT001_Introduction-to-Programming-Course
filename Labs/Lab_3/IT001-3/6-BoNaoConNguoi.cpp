#include <cmath>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
 using namespace std;
 const int N = 1e5 +5;
 int a[N], l[N], r[N];
int n;
 int main()
{
     cin >> n;
     for(int i=1;i<=n;i++)
         cin>>a[i];
     
     l[1]=a[1];
     
     for(int i = 2;i<=n;i++)
         l[i]= __gcd(l[i-1],a[i]);
     
     r[n] = a[n];
     
     for(int i = n-1; i>=1; i--)
         r[i]= __gcd(r[i+1],a[i]);
     
     int i2 = 1, ucln = r[2], tam;
     
     for (int i = 2; i<n; i++)
     {
         tam= __gcd(l[i-1],r[i+1]);
         if(tam > ucln)
         {
             i2=i;
             ucln=tam;
         }
     }
     
     if (l[n-1] > ucln)
     {
         i2 = n;
         ucln = l[n-1];
         
     }
     cout << i2 << "  "<< ucln;
 }
