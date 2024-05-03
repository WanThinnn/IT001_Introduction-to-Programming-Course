
#include <iostream>
#include <iomanip>
using namespace std;
int tuoi, a,b,c,d;
string dcn, hvt, gt, cccd, mskh;
float banh =3000.150, keo=1500.50, nuoc=1000.372, qao=68999.3398;
int main() 
{
    cout<<"Ho va Ten: ";    cin>>hvt;
    cout<<"Gioi tinh: ";    cin>>gt;
    cout<<"MSKH: ";         cin>>mskh;
    cout<<"CCCD/CMND: ";    cin>>cccd;
    cout<<"Tuoi: ";         cin>>tuoi;
    cout<<"Dia Chi Nha: ";  cin>>dcn;
    cout<<"SO LUONG BANH: ";    cin>>a;
    cout<<"SO LUONG KEO: ";     cin>>b;
    cout<<"SO LUONG CHAI NUOC: "; cin>>c;
    cout<<"SO LUONG QUAN AO: ";   cin>>d;
    cout<<"THANH TIEN: "; 
    float tt= a*banh + b*keo + c*nuoc + d*qao;
    cout<<fixed<<setprecision(5)<<tt;
    cout<<" ĐỒNG"<<endl;A
    return 0;
}

