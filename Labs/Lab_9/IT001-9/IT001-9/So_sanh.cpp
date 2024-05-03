#include <iostream>
using namespace std;

struct PhanSo
{
    int TUSO, MAUSO;
};


void Nhap(PhanSo &a)
{
    cin >> a.TUSO;
    cin >> a.MAUSO;
}

PhanSo Nhap()
{
    PhanSo b;
    cin >> b.TUSO;
    cin >> b.MAUSO;
    return b;
}

int SoSanh(PhanSo a, PhanSo b)
{
    int x = a.TUSO, y = a.MAUSO, z = b.TUSO, t = b.MAUSO;
    double del1, del2;
    del1 = 1.0*x/y;
    del2 = 1.0*z/t;
    if (del1 > del2)
        return 1;
    else if (del1 < del2)
        return -1;
    return 0;
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}

