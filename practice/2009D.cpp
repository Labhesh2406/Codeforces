#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int tt; cin >> tt;

	while (tt--) {
		int n, answer = 0; cin >> n;

		map<pair<int, int>, int>m;
		vector<int>cnt(2);

		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			m[ {x, y}]++;
			cnt[y]++;
		}

		for (auto &[i, j] : m) {
			auto [x, y] = i;
			if (m.count({x, 1 - y})) {
				answer += cnt[y] - 1;
			}
			if (m.count({x + 1, 1 - y}) && m.count({x - 1, 1 - y})) answer++;
		}

		cout << answer << "\n";
	}
}
