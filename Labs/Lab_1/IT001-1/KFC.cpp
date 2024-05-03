#include <iostream>
using namespace std;
float F, C, K;
int main()
{
    cin >> F;
    C= (F-32)/1.8;
    K= C + 273.15;
    cout << C <<" "<< K << endl;
    return 0;
}