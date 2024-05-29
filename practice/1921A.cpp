#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n = 4;
	vector<pair<int, int>> arr(n);
	int mn = 1001, mx = -1001;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
		mn = min(mn, arr[i].first);
		mx = max(mx, arr[i].first);
	}
	cout << (mx - mn) * (mx - mn) << endl;
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