#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);


int main()
{
    char s[MAX];
    cin.getline(s,MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
    {
        StringReverse(s);
        
    }
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

void StringReverse(char st[])
{
   char st2[100000];
   char st3[100000];
   int temp = 0;
   for (int64_t i = myStrlen(st,0)-1; i >= 0; i--)
    {
        st2[i] = st[temp];
        temp++;
    }
        st2[temp] = '@';
        temp--;
        for(int64_t j = temp; j >= 0; j--)
        {
            if(st2[j] == ' ' or j == 0)
            {
                    if(j == 0)
                    {
                        j--;
                    }
                for (int64_t k = j+1; ;k++)
                {
                        if(st2[k]=='@' or st2[k] == ' ')
                        {
                            break;
                        }
                    cout << st2[k];
                }
                cout << " ";
            }
    }
    exit(0);
}
