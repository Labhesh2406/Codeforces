#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	if (x1 > y1 && x2 < y2 || x1 < y1 && x2 > y2) {
		cout << "NO" << endl;
	}
	else
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