#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct PhanSo
{
    int tu, mau;
};

int ucln(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void Nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

PhanSo Nhap()
{
    PhanSo b;
    cin >> b.tu >> b.mau;
    return b;
}


PhanSo Chia(PhanSo &a, PhanSo &b)
{
    PhanSo thuong;
    thuong.tu = a.tu*b.mau;
    thuong.mau = a.mau*b.tu;
    return thuong;
}

PhanSo xuly()
{
    PhanSo a, b, c;
    c = Chia(a, b);
    return c;
}

void Xuat(PhanSo c)
{
    xuly();
    if (c.tu == 0 or c.mau == 0)
        cout << 0;
    else if (c.tu == c.mau)
        cout << 1;
    else if (c.tu + c.mau == 0)
        cout << -1;
    else if (c.tu % c.mau == 0)
        cout << c.tu/ucln(c.tu, c.mau);
    else if (c.tu < 0 and c.mau < 0)
        cout << abs(c.tu/ucln(c.tu, c.mau)) << "/" << abs(c.mau/ucln(c.tu, c.mau));
    else if (c.tu < 0 or c.mau < 0)
        cout << "-" << abs(c.tu/ucln(c.tu, c.mau)) << "/" << abs(c.mau/ucln(c.tu, c.mau));
    else
        cout << abs(c.tu/ucln(c.tu, c.mau)) << "/" << abs(c.mau/ucln(c.tu, c.mau));
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
