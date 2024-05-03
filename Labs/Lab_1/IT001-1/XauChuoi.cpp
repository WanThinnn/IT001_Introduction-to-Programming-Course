#include <string>
using namespace std;
string s;
int main()
{
    cin >> s;
    for (int i=0; i <= s.length(); i++)
    {
    do 
        if (s[i] != 'R' || s[i] != 'B') 
        {
            cout << "nhap lai :";
            cin >> s;
        }
    while (s[i] == 'R' && s[i+1] == 'B' || s[i] == 'B' && s[i+1] == 'R');
    }
    
    if(s[0] == s[s.length()-1])
        cout << "Lose";
    else
        cout <<"Win";
    return 0;
}