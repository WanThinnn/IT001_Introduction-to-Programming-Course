#include <stdio.h>
#include <iostream>

using namespace std;
int a[1000], b[1000], c[1000], d[1000];
int n, m, k, i, j;


void input(int a[], int &n)
{
    cin >> n;
    for (int i = 1; i <= n; i ++)
        cin >> a[i];
}


void swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
 

void Sort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
        for (int j = n; j > i; j--)
            if (a[j-1] > a[j])
                swap(a[j-1], a[j]);
}

void output(int a[], int &n)
{
    for (int i = 1; i <= n; i ++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    input(a,n);
    input(b,m);
    k = m + n;
    for (i = 1; i <= n; i ++)
    {
            d[i] = a[i];
    }
    
    for (i = n + 1, j = 1; i <= k; i++)
    {
        d[i] = b[j];
        j ++;
    }
    Sort(d,k);
    output(d,k);
    cout << endl;
}
