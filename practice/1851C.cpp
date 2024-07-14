#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		if (p[0] == p[n - 1]) {
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				cnt += (p[i] == p[0]);
			}
			cout << (cnt >= k ? "YES" : "NO") << '\n';
			continue;
		}
		int t0 = 0;
		int i0 = -1;
		for (int i = 0; i < n; i++) {
			if (p[i] == p[0] && t0 < k) {
				t0 += 1;
				i0 = i;
			}
		}
		int tn = 0;
		int in = n;
		for (int i = n - 1; i >= 0; i--) {
			if (p[i] == p[n - 1] && tn < k) {
				tn += 1;
				in = i;
			}
		}
		if (t0 == k && tn == k && i0 < in) {
			cout << "YES" << '\n';
		} else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}