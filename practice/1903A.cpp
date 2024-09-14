#include <bits/stdc++.h>
using namespace std;

bool solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (k > 1) {
		return true;
	}

	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		if (solve()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}