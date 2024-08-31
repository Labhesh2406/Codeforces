#include <bits/stdc++.h>
using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;
	int ans = (r + 1) / 2 - l / 2;

	cout << ans / 2 << endl;
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