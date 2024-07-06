#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
    char s1[MAX], s2[MAX];
    fgets(s1,MAX,stdin);
     fgets(s2,MAX,stdin);
    bool kt = myStrcat(s1, s2);
    int n1 = 0, n2 = 0;
    while(s1[n1] != '\0')
        n1++;
    while(s2[n2] != '\0')
        n2++;
    if (s1[n1-1]=='\n')
        s1[n1-1]= ' ';
    if (s2[n2-1]=='\n')
        s2[n2-1]= '\0';
    if (kt == true)
    {
        cout << s1 << s2;
    }
    else
        cout << "Khong noi duoc. Khong du bo nho.";
}

bool myStrcat(char s1[], char s2[])
{
    int n1 = 0, n2 = 0;
    while(s1[n1] != '\0')
        n1++;
    while(s2[n2] != '\0')
        n2++;
    if (s1[n1-1]=='\n')
        s1[n1-1]= '\0';
    if (s2[n2-1]=='\n')
        s2[n2-1]= '\0';
    if (n1 + n2 <= 255)
    {
            return true;
    }
    return false;
}
