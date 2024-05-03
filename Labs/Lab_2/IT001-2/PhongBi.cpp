#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d, tam1 = 0, tam2 = 0, tam = 0;
    cin >> a >> c;
    if ((a*b) <= (c*d))
        tam=0;
    else if ((a>c) && (b>d))
    {
            c=c*2;
            tam1++;
    }
    cout << tam1 << endl << tam2 << endl;
    cout << tam << endl;
}
