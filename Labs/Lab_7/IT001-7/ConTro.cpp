#include <stdio.h>
#include <iostream>

using namespace std;

void Swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}
/*
void PointerTest()
{
    int x = 5, y = 100;
    int *p;
    p = &x;
    cout << x << "\t" << p << "\t" << y << endl;
    *p = 10;
    cout << x << "\t" << p << "\t" << y << endl;
    p = &y;
    *p = 103;
    cout << x << "\t" << p << "\t" << y << endl;
    
    cout << "-------------------" << endl;
    cout << x << "\t"  << "\t" << y << endl;
    Swap(&x,&y);
    cout << x << "\t" <<  "\t" << y << endl;
}
 */


struct Students
{
    string name, address;
    int age;
};

void InputStruct(Students &X)
{
    Students *ptr;
    getline(cin, X.name);
    cin >> X.age;
    ptr = &X;
    cout << ptr->name << " " << X.age << endl;
}

int main()
{
    Students a;
    InputStruct(a);
}


