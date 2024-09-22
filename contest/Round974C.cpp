#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	ll n, sum = 0;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] ;
		sum += a[i] ;
	}

	sort(a.begin(), a.end());
	ll x = a[n / 2] * (2 * n) - sum + 1;
	if (n <= 2) {
		cout << -1 << endl;
		return;
	}
	cout << ((x < 0) ? 0 : x) << endl;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
