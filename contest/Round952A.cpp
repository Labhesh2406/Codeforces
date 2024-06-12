#include <bits/stdc++.h>
using namespace std;

void solve() {
	string a, b;
	cin >> a >> b;


	// if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
	// 	cout << a << " " << b << endl;
	// }
	// else if (a[0] != b[0] && a[1] != b[1] && a[2] != b[2]) {
	// 	swap(a[0], b[0]);
	// 	cout << a << " " << b << endl;
	// }

	swap(a[0] , b[0]);
	cout << a << " " << b << endl;

}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}