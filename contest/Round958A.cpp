#include <iostream>
using namespace std;

int solve() {
	int n, k;
	cin >> n >> k;
	cout << (n + k - 3) / ( k - 1) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
