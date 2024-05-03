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


PhanSo Cong(PhanSo &a, PhanSo &b)
{
    PhanSo tong, tong_f;
    tong.tu = a.tu * b.mau + a.mau * b.tu;
    tong.mau = a.mau * b.mau;
    tong_f.tu = tong.tu/(ucln(tong.tu, tong.mau));
    tong_f.mau = tong.mau/(ucln(tong.tu, tong.mau));
    return tong_f;
}

PhanSo Rutgon()
{
    PhanSo a, b, c;
    c = Cong(a, b);
    return c;
}

void Xuat(PhanSo c)
{
    Rutgon();
    if (c.tu == 0)
        cout << 0;
    else if (c.tu + c.mau == 0)
        cout << -1;
    else if (c.tu - c.mau == 0)
        cout << 1;
    else if (c.tu % c.mau == 0)
        cout << c.tu/c.mau;
    else if (c.tu < 0 and c.mau < 0)
        cout << abs(c.tu) << "/" << abs(c.mau);
    else if (c.tu < 0 or c.mau < 0)
        cout << "-" << abs(c.tu) << "/" << abs(c.mau);
    else
        cout << c.tu << "/" << c.mau;
}




int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
