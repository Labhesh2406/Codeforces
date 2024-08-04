#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int a;
			cin >> a;
			if (n == 1 && m == 1) a = -1;
			else if (a == n * m) a = 1;
			else a++;
			cout << a << " \n"[j + 1 == m];
		}
	}
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