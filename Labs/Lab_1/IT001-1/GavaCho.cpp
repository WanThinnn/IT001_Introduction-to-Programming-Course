#include <iostream>
using namespace std;
int soga, socho, xxx, yy;
int main()
{
    cin>>xxx>>yy;
    socho=(yy-2*xxx)/2;
    soga=xxx - socho;
    cout << soga << " " << socho;
    cout << endl;
    return 0;
}
