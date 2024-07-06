#include <iostream>
using namespace std;
string n ;
int sm = 0 ;
int main()
{
    cin >> n ;
    int ii = n.size()-1 ;
    for ( int i=0 ; i<n.size() ; i++ ) sm = sm + (n[i]-'0');

    for ( int i=0 ; i<n.size() ; i++ )
        for ( char j='9' ; j>n[i] ; j-- )
            if ( (sm + (j-n[i]))%3==0 )
            {
                n[i] = j ;
                cout << n ;
                return 0 ;
            }

    for ( char j = n[ii]-1; j>='0' ; j-- )
        if ( (sm + (n[ii]-j))%3==0 )
            {
                n[ii] = j ;
                cout << n ;
                return 0 ;
            }
    cout << endl;
}