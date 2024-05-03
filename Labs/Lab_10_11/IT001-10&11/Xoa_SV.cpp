
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

int j = -1;
void Nhap(SinhVien A[], int &n)
{
    cin >> n;
    int t = n;
    int i = 0;
    while (t--)
    {
        cin.ignore();
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan;
        cin >> A[i].DiemLy;
        cin >> A[i].DiemHoa;
        A[i].DTB = ((A[i].DiemHoa+A[i].DiemLy+A[i].DiemToan)/3);
        i++;
    }

}
void Xuat(SinhVien A[], int n)
{
    int i = 0;
    for(int i = 0; i <= n; i++)
    {
        cout<<A[i].MASV<<'\t'<< A[i].HoTen<<'\t'<<A[i].NgaySinh<<'\t'<<A[i].GioiTinh<<'\t'<<A[i].DiemToan<<'\t'<<A[i].DiemLy<<'\t'<<A[i].DiemHoa<<'\t'<<setprecision(3)<<A[i].DTB<<endl;
    }
}

void XoaTheoHoTen(SinhVien A[], int &n, char hoTenCanXoa[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[i].HoTen, hoTenCanXoa) != 0)
        {
            j++;
            A[j] = A[i];
        }
    }
    n = j;
}


void Nhap(char hoTenCanXoa[])
{
    cin.getline(hoTenCanXoa, 100);
}

int main()
{
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;
    Nhap(hoTenCanXoa);
    Nhap(A, n);
    XoaTheoHoTen(A, n, hoTenCanXoa);
    Xuat(A, n);
    return 0;
}
