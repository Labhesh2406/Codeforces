#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	if (a & 1) {
		cout << "NO" << endl;
	}
	else {
		if (b & 1 ) {
			cout << (a > 0 ? "YES\n" : "NO\n");
		}
		else {
			cout << "YES" << endl;
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