#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, k;
	cin >> n >> m >> k;

	for (int i = n; i >= k; i--) {
		cout << i << " ";
	}
	for (int i = m + 1; i < k; i++) {
		cout << i << " ";
	}
	for (int i = 1; i <= m; i++) {
		cout << i << " ";
	}
	cout << endl;
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