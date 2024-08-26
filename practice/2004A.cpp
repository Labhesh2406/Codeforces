#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (n == 2 && arr[0] + 1 < arr[1]) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
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