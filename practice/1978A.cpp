#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx = *max_element(a.begin(), a.end() - 1);
	cout << mx + a[n - 1] << endl;
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