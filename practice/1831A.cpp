#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cout << n + 1 - x << " ";
	}
	cout << endl;
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