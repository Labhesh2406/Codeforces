#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = a[0];
	for (int i = 1; i < n; i++) {
		ans = max(ans, a[i] - a[i - 1]);
	}
	ans = max(ans, 2 * (x - a.back()));

	cout << ans << endl;
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