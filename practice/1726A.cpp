#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
	int n, mini = INT_MAX;
	cin >> n;
	vector<int> a(n), min1, max1;
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		mini = min(mini, a[i]);
	}
	maxi = max(maxi, a[n - 1] - mini);
	int maxi1 = 0;
	for (int i = n - 1; i > 0; i--) {
		maxi1 = max(maxi1, a[i]);
	}
	maxi = max(maxi, maxi1 - a[0]);
	for (int i = 0; i < n - 1; i++) {
		maxi = max(maxi, a[i] - a[i + 1]);
	}
	cout << maxi << endl;
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