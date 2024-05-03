#include <iostream> 
using namespace std;
long long n;
int res = 0; 
int main()
{
	cin >> n;
	while (n > 0 && n % 10ll == 0ll)
		n = n / 10ll;

	while (n > 0)
	{
		if (n % 10ll == 0ll) res++;
		n = n / 10ll;
	}
	cout << res;
	cout << endl;
}