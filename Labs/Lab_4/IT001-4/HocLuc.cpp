#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
float T, L, H, GPA, t;
using namespace std;

void nhap()
{
    cin >> T;
    cin >> L;
    cin >> H;
}

float xuly()
{
    GPA = (T + L + H)/3;
    return GPA;
}

void xuat()
{
    cout << "DTB = " << fixed << setprecision(2) << GPA;
    cout << endl;
    if (GPA >= 9) cout << "Loai: XUAT SAC";
    else if (GPA >= 8) cout << "Loai: GIOI";
    else if (GPA >= 7) cout << "Loai: KHA";
    else if (GPA >= 6) cout << "Loai: TB KHA";
    else if (GPA >= 5) cout << "Loai: TB";
    else if (GPA >= 4) cout << "Loai: YEU";
    else cout << "Loai: KEM";
}

int main()
{
    nhap();
    xuly();
    xuat();
}
