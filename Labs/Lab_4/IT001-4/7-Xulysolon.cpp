#include <iostream>
#include <algorithm>
 
using namespace std;
 
int add[10], ans[10];
 
void init() {
    ans[1] = ans[2] = ans[4] = ans[8] = 1;
    ans[3] = ans[6] = 3;
    ans[5] = 1;
    ans[7] = 7;
    ans[9] = 9;
 
    add[1] = add[2] = add[5] = 1;
    add[4] = 2;
    add[8] = 4;
    add[3] = add[6] = 3;
    add[7] = 7;
    add[9] = 9;
}
 
int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
 
    init();
 
    int tests = 1; cin >> tests;
 
    while (tests--) {
        string n; cin >> n;
 
        reverse(n.begin(), n.end());
 
        int carry = 0;
        for(int i = 0; i < (int) n.size(); ++i) {
            carry += n[i] - '0';
            carry = carry / 10 + add[carry % 10];
        }
 
        while (carry >= 10) carry = carry / 10 + add[carry % 10];       
 
        cout << ans[carry] << '\n';
    }
 
	return 0;
}