#include <iostream>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int curr = 0;
	int x = 2;

	for (int i = 2; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j * i <= n; j++) {
			sum += j * i;
		}
		if (sum > curr) {
			curr = sum;
			x = i;
		}
	}
	cout << x << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
