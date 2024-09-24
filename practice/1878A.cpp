#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {
			count++;
		}
	}

	if (count > 0) cout << "YES" << endl;
	else cout << "NO" << endl;
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