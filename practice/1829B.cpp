#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int ans = 0;
	int curr = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x) {
			curr = 0;
		}
		else {
			curr++;
		}
		ans = max(ans, curr);
	}
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