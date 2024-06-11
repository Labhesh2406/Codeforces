#include <bits/stdc++.h>
using namespace std;

void solve() {
	string x;
	cin >> x;
	int n = x.size();

	if (n == 1) {
		cout << "NO" << endl;
		return;
	}
	if (x[0] != '1') {
		cout << "NO" << endl;
		return;
	}
	if (x[n - 1] == '9') {
		cout << "NO" << endl;
		return;
	}
	for (int i = 1; i < n - 1; i++) {
		if (x[i] == '0') {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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