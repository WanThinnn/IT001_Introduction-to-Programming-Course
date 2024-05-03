
#include <iostream>
using namespace std;
int i,j, n, k;
int main ()
{
    cin >> n;
        if ((n >= 0) && (n <= 9))
        {
            for (i = 1; i<=4; i++)
            {
            for (j = 1; j<=6; j++)
            {
                if (i==1 || i == 4 || j == 1 || j == 6)
                {
                    cout << n << " ";
                }
                else
                {
                    cout << ("  ");
                }
            }
        cout << endl;
            }
        for (i = 1; i <= 6; i++)
            {
                for (j = 1; j <= 6-i; j++)
                    cout << (" ");
                for (k = 1; k <= i; k++)
                    {
                        if (i == 6)
                            cout << n << (" ");
                        else if  (k == 1)
                            cout << n << (" ");
                        else if (k < i)
                            cout << ("  ");
                        else cout << n << (" ");
                        
                    }
                cout << endl;
            }
        }
        else cout << " ";
}

