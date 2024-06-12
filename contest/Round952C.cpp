#include <iostream>
#include <vector>
using namespace std;

int solve() {
	int n;
	cin >> n;

	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<long long> pSum(n);
	vector<long long> maxi(n);

	pSum[0] = a[0];
	maxi[0] = a[0];

	for (int i = 1; i < n; i++) {
		pSum[i] = pSum[i - 1] + a[i];
		maxi[i] = max(maxi[i - 1], a[i]);
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (pSum[i] - maxi[i] == maxi[i]) {
			ans++;
		}
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
