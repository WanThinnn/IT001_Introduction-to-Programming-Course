#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
double a[1000][1000], b[1000];

void INPUT(double a[1000][1000], int &m, int &n)
//    cin >> m >> n;
//    for (int i = 0; i < m; i++)
//        for (int j = 0; j < m; j++)
//            cin >> a[i][j];

{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void MAX(int a[1000][1000], int b[1000], int m, int n)
{
    int max = a[0][0];
    for(int i = 0; i < m; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        b[i] = max;
    }
}

int main()
{
    INPUT(a, m, n);
    MAX(a, b, m, n);
}
