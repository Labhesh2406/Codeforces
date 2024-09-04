#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	map<int, int> freq;
	int mx = 0;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		mx = max(mx, ++freq[x]);
	}
	cout << n - mx << '\n';
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