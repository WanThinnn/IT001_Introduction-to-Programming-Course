#include <iostream>
#include <string>
using namespace std;
int t = 0, k = 0;
string A, B;

void Input(string &A, string &B)
{
    cin >> A >> B;
}

void Solve(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[t])
            t++;
        else if (a[i] == b[0])
        {
            t = 1;
        }
        else t = 0;
        if (t == b.size())
        {
            k++;
            t = 0;
        }
    }
    cout << k;
}

int main()
{
    Input(A, B);
    Solve(A, B);
    return 0;
}
