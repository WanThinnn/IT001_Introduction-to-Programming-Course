#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long long n, m, k, t1, t2, t3, tam;
long long a[1000];

int main()
{
    cin >> n >> m;
    k = (to_string(n)).length();
    t2 = (float)(pow(10,k));
    
    for (long long i = n; i <= m; i = i + t2)
    {
        if (n == i%t2)
        {
            tam++;
            a[tam] = i;
        }
    }
    cout << tam << endl;
    for (long long i = 1; i <= tam; i = i + 1) cout << a[i] << "  ";
}
