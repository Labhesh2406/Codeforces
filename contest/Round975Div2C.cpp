#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(), a.end()
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);

	for (auto &i : arr) {
		cin >> i;
	}

	int maxEle = LLONG_MIN;
	for (auto x : arr) {
		maxEle = max(maxEle, x);
	}

	int sum = accumulate(all(arr), 0LL);
	for (int i = n; i > 0; i--) {
		int que = (sum + k) / i;
		if (que * i <= sum - 1)
			continue;
		if (que <= maxEle - 1)
			continue;

		cout << i << endl;
		return;
	}
}

signed main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}