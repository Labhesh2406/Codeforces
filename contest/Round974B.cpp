#include <iostream>
#define ll long long
using namespace std;

void solve() {
	ll n, k; cin >> n >> k;
	ll sum = 0;
	if (n <= k) {
		sum = n * (n + 1) / 2;
	}
	else {
		sum = (k * (k + 1)) / 2 + (n - k) * k;
	}

	if (sum % 2 == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
