#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &arr, int n, int a) {
	int maxi = 0;
	int count = 0;
	for (int i = a; i < n; i += 2) {
		maxi = max(maxi, arr[i]);
		count++;
	}
	return maxi + count;
}

void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int id0 = maxScore(arr, n, 0);
	int id1 = maxScore(arr, n, 1);
	cout << max(id0, id1) << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
