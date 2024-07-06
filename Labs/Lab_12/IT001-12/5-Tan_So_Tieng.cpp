
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
    char s[MAX];
    fgets(s,MAX,stdin);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemTieng(s);
    return 0;
}


int myStrlen(char s[], int k)
{
    while (s[k] != '\0')
        k++;
    return k;
}

int myStrcmp(char s1[], char s2[])
{
    if (myStrlen(s1,0) == 0)
        return 0;
    return 1;
}

void DemTieng(char s1[])
{
    for (int i = 0; i < k; i++)
    {
        if s1[i]
    }
}
