#include <cmath>
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
float n,m, k;


float taiche(int m, int k)
{
    if (k == 1)
        return 1/pow(m,k);
    return   1/pow(m,k) + taiche(m,k-1);
    
}

int candle(int candles, int makeNew)
{
    if (candles == 0)
        return 0;
    if (candles > 0)
        return candles + candle(-candles, makeNew);
    if (-candles < makeNew) return 0;
    return (-candles) / makeNew + candle(-((-candles) / makeNew + (-candles) % makeNew), makeNew);
}

int main()
{
    cin >> n >> m;
    cout << (round(n*taiche(m,m)) + n - candle(n, m)) << endl;
}
