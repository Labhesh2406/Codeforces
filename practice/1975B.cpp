#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	vector<ll> ans;
	for (int i = 1; i < n; i++) {
		if (a[i] % a[0] != 0) {
			ans.push_back(a[i]);
		}
	}
	for (auto j : ans) {
		if (j % ans[0] != 0) {
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
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