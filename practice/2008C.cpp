#include <bits/stdc++.h>
using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;
	vector <int> a;
	if (l == r) {
		cout << 1 << "\n";
		return;
	}

	int x = l;
	int y = l + 1;

	int ans = 2;
	while (true) {
		int d = y - x;
		d++;
		int z = y + d;

		if (z > r) break;
		x = y;
		y = z;
		ans++;
	}

	cout << ans << "\n";
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