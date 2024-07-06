#include <iostream>
using namespace std;
int i;
int main()
{
        for ( i = 100; i<=999; i++)
                if ( (i/10) + (i%10) + 243 == i)
                    cout << i << " ";
}
