#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] >= k) {
		}
	}

	int curr = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= k) {
			curr += a[i];
		}
		else if (a[i] == 0 && curr > 0) {
			curr--;
			ans++;
		}
	}
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