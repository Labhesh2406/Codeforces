#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.rbegin(), arr.rend());
	int ans = 0;

	for (int i = 0; i < n - 1; i += 2) {
		ans += arr[i] - arr[i + 1];
	}
	ans = max(0, ans - k);
	if (n % 2 == 1) ans += arr[n - 1];
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