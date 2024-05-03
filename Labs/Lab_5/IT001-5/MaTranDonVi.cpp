#include <iostream>
#include <cmath>

#define MAXR 10000
#define MAXC 10000

int d=1,m,n, S;
int a[MAXR][MAXC];

void NhapMaTran(int a[MAXR][MAXC], int &n)
{
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            std::cin >> a[i][j];
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                S = S + a[i][j];
        }
        
        for (int i = 1; i < n; i++)
            if (a[i][i] == a[i+1][i+1]) d++;
    }
}

bool isMaTranDonVi(int a[MAXR][MAXC], int n)
{

    if (S == d)
        return true;
        return false;
}

int main()
{
    NhapMaTran(a, n);
    isMaTranDonVi(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
}


