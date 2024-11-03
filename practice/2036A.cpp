#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool ans = true;
	for (int i = 1; i < n; i++) {
		if (abs(a[i - 1] - a[i]) != 5 && abs(a[i - 1] - a[i]) != 7) {
			ans = false;
			break;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;
}

int main(int argc, char const *argv[]) {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}