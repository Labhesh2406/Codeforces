#include <iostream>
using namespace std;
typedef long long int ll;


void solve() {
	ll n ;
	cin >> n;
	string s;
	cin >> s;

	cout << s[n - 1] << endl;
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}