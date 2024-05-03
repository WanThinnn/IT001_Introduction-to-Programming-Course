#include <cmath>
#include <iostream>
#include <fstream>
#define fi "SQUARES.INP"
#define fo "SQUARES.OUT"

using namespace std;
int64_t  i, N, L, T2;
double A, T, t;

void Input(int64_t &N, int64_t &L)
{
    cin >> N >> L;
}

int64_t FastPower(float x, int64_t n)
{
    if (n == 0)
        return 1;
    if (n % 2 != 0)
        return (FastPower(x,n-1)*x)%q;
    int64_t t = FastPower(x,n/2);
    return (t*t)%q;
}

void Output()
{
    cout << FastPower(L,N);
    
}

int main()
{
    Input(N, L);
    Process(N, L);
    Output() ;
    cout << endl;
    cout <<L*L*pow(4,N); //S0
}
