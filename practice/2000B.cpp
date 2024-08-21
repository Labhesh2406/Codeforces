#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	map<int, int> mp;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mp[a[0]] = 1;

	for (int i = 1; i < n; i++) {
		if (mp[a[i] - 1] != 1 && mp[a[i] + 1] != 1) {
			cout << "NO" << endl;
			return;
		}
		mp[a[i]] = 1;
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