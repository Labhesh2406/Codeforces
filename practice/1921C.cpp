#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, f, a, b;
	cin >> n >> f >> a >> b;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	int last = 0;
	for (int i = 0; i < n; i++) {
		long long On = 1LL * a * (v[i] - last);
		long long OffAndOn = b;
		long long required = min(On, OffAndOn);

		f = f - required;
		last = v[i];

		if (f <= 0) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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