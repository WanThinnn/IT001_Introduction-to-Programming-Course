#include <iostream>
using namespace std;
int T[1000];
struct POINT
{
    double x, y, z;
};


POINT POLYGON[1000];


void nhap(POINT A[], int &n)
{
    cin >> n;
    for (int j = 0; j < n; j++)
        {
            cin >> POLYGON[j].x >> POLYGON[j].y >> POLYGON[j].z;
        }
}

void khoangcach(POINT A[], int n)
{
    for (int j = 0; j < n; j++)
    {
        T[j] = (POLYGON[j].x*POLYGON[j].x + POLYGON[j].y*POLYGON[j].y + POLYGON[j].z*POLYGON[j].z);
    }
    sort(T, T + n);
}


int main()
{
    POINT A[1000];
    int n;
    nhap(A, n);
    for (int j = 0; j < n; j++)
        cout << POLYGON[j].x << " " << POLYGON[j].y << " " << POLYGON[j].z << endl;
    khoangcach(A, n);
    for (int j = 0; j < n; j++)
        cout << T[j] << " ";
    cout << endl;
    cout << "MAX T = " << T[n-1];
    cout << endl;
    
}

