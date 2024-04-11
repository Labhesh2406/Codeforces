#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	deque<ll> dq;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		dq.push_back(x);
	}
	int first = 1, ans = 0;

	while (k > 0 && dq.size()) {
		if (dq.size() == 1) {
			if (dq.front() <= k) {
				ans++;
			}
			break;
		}

		int x = dq.front();
		int y = dq.back();

		dq.pop_front(), dq.pop_back();

		int z = min(x, y);

		if (first == 1) {
			if (z == x) {
				if (k < 2 * z - 1)  break;

				k -= 2 * z - 1;
				y -= z - 1;
				first = 0;
				dq.push_back(y);
				ans++;
			}
			else {
				if (k < 2 * z)  break;

				k -= 2 * z;
				x -= z;
				dq.push_front(x);
				ans++;
			}
		}
		else {
			if (z == y)
			{
				if (k < 2 * z - 1)       break;

				k -= 2 * z - 1;
				x -= z - 1;
				first = 1;
				dq.push_front(x);
				ans++;
			}
			else
			{
				if (k < 2 * z)         break;

				k -= 2 * z;
				y -= z;
				dq.push_back(y);
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main(int argc, char const * argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}