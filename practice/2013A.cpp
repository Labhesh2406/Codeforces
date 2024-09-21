#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int x, y; cin >> x >> y;
	x = min(x, y);
	cout << (n + x - 1) / x << endl;
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