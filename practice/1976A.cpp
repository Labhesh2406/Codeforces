#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	for (int i = 1; i < n; i++) {
		if (s[i] < s[i - 1]) {
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
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

// if (is_sorted(s.begin(), s.end())) {
// 	cout << "YES" << endl;
// }
// else {
// 	cout << "NO" << endl;
// }
// }