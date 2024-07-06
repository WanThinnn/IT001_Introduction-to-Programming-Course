#include <iostream>
using namespace std;
int n, max, min;
int main()
{
    cin>>n;
    int mang1[n];
    for (int i = 1; i<=n; ++i)
        cin >> mang1[i];
    
    for (int i = 1; i<=n; ++i)
        cout << mang1[i] << " ";
    cout << endl;

}
