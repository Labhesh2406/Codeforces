#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int k;
	cin >> k;
	int left = 1, right = 4e18, ans = 4e18;

	while (left <= right) {
		int mid = (left + right) / 2;
		int on = mid - (int)sqrtl(mid);

		if (on < k) {
			left = mid + 1;
		}
		else {
			ans = mid;
			right = mid - 1;
		}
	}
	cout << ans << endl;
}

signed main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}