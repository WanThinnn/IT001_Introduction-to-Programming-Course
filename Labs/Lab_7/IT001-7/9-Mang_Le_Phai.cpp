#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int64_t r, c, k, max;
int64_t a[1000][1000], b[1000];
string ch;

void Input(int64_t a[1000][1000], int64_t &r, int64_t &c)
{
    cin >> r >> c;
    for (int64_t i = 1; i <= r; i++)
        for (int64_t j = 1; j <= c; j++)
            cin >> a[i][j];
}

void Sort(int64_t a[1000][1000])
{
    int64_t max = 0;
    for (int64_t j = 1; j <= c; j++)
    {
        max = 1;
        for (int64_t i = 1; i<=r; i++)
        {
            if (to_string(a[i][j]).length() > max)
            {
                max = to_string(a[i][j]).length();
            }
        }
            k++;
            b[k] = max;
    }
}


void Output()
{
    for (int64_t i = 1; i<=r;i++)
        {
            for (int64_t j = 1; j<=c;j++)
                if (j == 1)
                    cout << setw(b[j]) << right << a[i][j];
                else
                cout << setw(b[j]+1) << right << a[i][j];
                cout << endl;
        }
}



int main()
{
    Input(a, r, c);
    Sort(a);
    Output();
}
