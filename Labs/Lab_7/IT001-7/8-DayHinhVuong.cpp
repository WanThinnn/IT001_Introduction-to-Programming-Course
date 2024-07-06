#include <iostream> 
using namespace std;

const unsigned int M = 1000000007;
int main ()
{
    long long n, l , s = 0, ans=0; 
    cin >> n >> l;
    s+= (l%M * l%M);
    while(n>=0)
        {
            ans = (ans + s)%M;
            s = (s*4)%M;
            n--;
        }
    cout << ans % M;
}