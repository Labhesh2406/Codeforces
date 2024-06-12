#include <iostream>
#include <vector>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;

	vector<int>r, c;

	for (int i = 0; i < n; ++i) {
		string row;
		cin >> row;
		for (int j = 0; j < m; j++) {
			if (row[j] == '#') {
				r.push_back(i);
				c.push_back(j);
			}
		}
	}

	int h = (r.front() + r.back()) / 2;
	int k = (c.front() + c.back()) / 2;

	cout << h + 1 << " " << k + 1 << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
