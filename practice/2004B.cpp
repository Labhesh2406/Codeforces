#include <bits/stdc++.h>
using namespace std;

void solve() {
	int l, r, L, R;
	cin >> l >> r;
	cin >> L >> R;

	int lo = max(l, L);
	int hi = min(r, R);

	if (lo > hi) {
		cout << "1" << endl;
		return;
	}
	int ans = hi - lo;
	if (min(l, L) < lo) ans++;
	if (max(r, R) > hi) ans++;

	cout << ans << endl;
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