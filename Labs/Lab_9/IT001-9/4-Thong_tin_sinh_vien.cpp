#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &A)
{
    fgets(A.MASV,10,stdin);
    fgets(A.HoTen,100,stdin);
    fgets(A.NgaySinh,12,stdin);
    cin >> A.GioiTinh;
    cin >> A.DiemToan;
    cin >> A.DiemLy;
    cin >> A.DiemHoa;
    A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa)/3;
    fflush(stdin);
}


void Xuat(SinhVien A)
{
    int n1 = 0, n2 = 0, n3 = 0;
    while(A.MASV[n1] != '\0')
        n1++;
    if (A.MASV[n1-1]=='\n')
        A.MASV[n1-1]= '\0';
    
    while(A.HoTen[n2] != '\0')
        n2++;
    if (A.HoTen[n2-1]=='\n')
        A.HoTen[n2-1]= '\0';
    
    while(A.NgaySinh[n3] != '\0')
        n3++;
    if (A.NgaySinh[n3-1]=='\n')
        A.NgaySinh[n3-1]= '\0';
    
    
    cout << A.MASV << "\t" << A.HoTen << "\t" << A.NgaySinh
    << "\t" << A.GioiTinh << "\t" << A.DiemToan << "\t" << A.DiemLy << "\t" << A.DiemHoa << setprecision(3) << "\t"<< A.DTB;
}

int main()
{
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
