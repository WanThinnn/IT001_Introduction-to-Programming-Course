#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ofstream fo("vidu1.inp");
    fo << 5 << " " << 7;
    fo.close();
    
    ifstream fi("vidu1.inp");
    int x, y;
    fi >> x >> y;
    cout << x + y;
    fi.close();
    return 0;
}
