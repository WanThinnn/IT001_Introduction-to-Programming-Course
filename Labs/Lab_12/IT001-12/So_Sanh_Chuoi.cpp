#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
    char s1[MAX], s2[MAX];
    cin.getline(s1,MAX);
    cin.getline(s2,MAX);
    int kt = myStrcmp(s1, s2);
    cout << kt << endl;
    return 0;
}
int64_t N1 = 0, N2 = 0;
int myStrcmp(char s1[], char s2[])
{
    int64_t n1 = 0, n2 = 0;
    
    while (s1[n1] != '\0')
           n1++;
    while (s2[n2] != '\0')
           n2++;
    
    for (int i = 0; i < n1; i++)
        N1 = N1 + s1[i];
    for (int i = 0; i < n2; i++)
        N2 = N2 + s2[i];
    
    if (N1 == N2)
        return 0;
    else if (N1 > N2)
        return 1;
    return -1;
}
