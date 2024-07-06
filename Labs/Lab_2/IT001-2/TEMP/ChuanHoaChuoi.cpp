#include <string>
#include <iostream>

using namespace std;
string st1, st2;
long long n, j, m;

int main()
{
    cout << ("Nhap vao 1 chuoi: ");
    
    getline(cin, st1);
    
    n = st1.length();
    
    for (int i = 0; i<n; i++)
        st1[i]=tolower(st1[i]);
    
    for (int i = 0; i<n; i++)
    {
        if (st1[0] == ' ')
            st1.erase(st1.begin() + 0);
        if (st1[n-1] == ' ')
            st1.erase(st1.begin() + (n-1));
    }
    
    for (int i = 0; i<n; i++)
        if ((st1[i] == ' ') && (st1[i+1] == ' '))
            st1.erase(st1.begin() + i);

    st1[0]=toupper(st1[0]);

    for (int i = 0; i<n; i++)
            if (st1[i] == ' ')
                st1[i+1]=toupper(st1[i+1]);
    
    cout << st1 << endl;
    return 0;
}

