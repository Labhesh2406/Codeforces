#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x, k;
	cin >> x >> k;
	if (x % k != 0) {
		cout << 1 << endl;
		cout << x << endl;
	}
	else if (x % k != 1) {
		cout << 2 << endl;
		cout << 1 << " " << x - 1 << endl;
	}
	else {
		cout << 2 << endl;
		cout << -1 << " " << x + 1 << endl;
	}
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