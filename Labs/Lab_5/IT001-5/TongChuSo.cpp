#include <iostream>

int input(int &N)
{
    std::cin >> N;
    return N;
}

int TongChuSo(int N)
{
int S = 0;
    while (N != 0)
    {
        S = S + N%10;
        N = N/10;
    }
    
    return S;
}

int main()
{
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
