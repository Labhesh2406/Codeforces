#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int len = count(s.begin(), s.end(), '.');
	if (len <= 2) {
		cout << len << endl;
		return;
	}

	int ans = len;
	for (int i = 0; i + 2 < n; i++) {
		if (s.substr(i, 3) == "...") {
			ans = 2;
		}
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