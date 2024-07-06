#include <bits/stdc++.h>

#define ll long long

using namespace std;

string s;

vector<char>A;

vector<string>ans;

bool is_valid(int ngay, int thang, int nam) 
{
    if (min({ngay, thang, nam}) <= 0) 
        return false;
    if (thang > 12) 
        return false;
    if (thang == 2) 
    {
        if (nam % 3328 == 0) return ngay <= 30;
        if (nam % 400 == 0 or (nam % 100 != 0 and nam % 4 == 0)) 
            return ngay <= 29;
        return ngay <= 28;
    }

    if (thang == 4 or thang == 6 or thang == 9 or thang == 11) 
        return ngay <= 30;
    return ngay <= 31;
}
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin >> s;
    for(char c: s) A.push_back(c);
    cin >> s;
    for(char c: s) A.push_back(c);
    cin >> s;
    for(char c: s) A.push_back(c);
    sort(A.begin(), A.end());
    do {
        int nam = (A[0] - '0') * 1000 + (A[1] - '0') * 100 + (A[2] - '0') * 10 + (A[3] - '0');
        int thang = (A[4] - '0') * 10 + (A[5] - '0');
        int ngay = (A[6] - '0') * 10 + (A[7] - '0');
        if (is_valid(ngay, thang, nam)) 
        {
            string t = "";
            t.push_back(A[0]);
            t.push_back(A[1]);
            t.push_back(A[2]);
            t.push_back(A[3]);
            t.push_back(' ');
            t.push_back(A[4]);
            t.push_back(A[5]);
            t.push_back(' ');
            t.push_back(A[6]);
            t.push_back(A[7]);
            ans.push_back(t);
        }
    } 
    while (next_permutation(A.begin(), A.end()));
    cout << ans.size() << '\n';
    for(string s: ans) cout << s << '\n';
 return 0;
}