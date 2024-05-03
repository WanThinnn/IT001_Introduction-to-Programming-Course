#include <iostream>
#include <string>
using namespace std;
string n;
int d, l, p, t;
int main()
{
    cin >> n;
    t = p = 0;
    l = n.size(); 
    while (p < l)
    {
        t += n[p];
        p++;
    }
    d = t % 3;
    for (p=0; (p<l) && (n[p]+ 3-d > '9'); p++);
    if (p >= l) 
    {
        n[l - 1] -= ((d==0) ? 3 : d);
    }   //khong tim duoc cho de tang --> giam// 
    cout << n << endl;
}