#include <bits/stdc++.h>
using namespace std;

int solve() {
	int ans = 3;
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		if (i == arr[arr[i - 1] - 1]) {
			ans = 2;
			break;
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