#include <stdio.h>
#include <iostream>
using namespace std;
double a[1000][1000], b[10000], delta, S1, S2, S3;
int n, i, j, k, t = 0, check, temp = 0, m;

void input()
{
    cin >> n >> m;
    for (i = 1; i<= n; i++)
        for (j = 1; j<= m; j++)
            cin >> a[i][j];
}

void process_MTI()
{
    for (i = 1; i<= n; i++)
    {
        if (a[i][i] == 1)
            check++;
    }
}

void process_SMT()
{
    for (i = 2; i<= n; i++)
    {
        for (j = 1; j < i; j++)
            if (a[i][j] != 0)
                S1 = S1 + a[i][j];
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
                S3 = S3 + a[i][j];
    }
    
    delta = S3 - S1;
}

void process_only(double a[1000][1000])
{
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j < i; j++)
            if (a[i][j] != 0)
                t++;
        b[i] = t;
        t = 0;
    }
    
}

void Check()
{
    for (i = 2; i <= n; i++)
        if (b[i] == 0 or b[i] == 1)
            temp++;
}

int main()
{
        input();
        process_MTI();
        process_SMT();
        process_only(a);
        Check();
        
        if ((int)check == n and (int)delta == n and (int)temp == n-1)
            cout << "Yes";
        else
            cout << "No";
}
