#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int num1 = n / 2;
	int num2 = n / 2;
	if (n & 1) {
		num2++;
	}

	map<int, int> m1;
	for (auto x : arr) {
		m1[x]++;
	}

	if (m1.size() == 1) {
		cout << "Yes" << endl;
		return;
	}

	if (m1.size() == 2) {
		if (m1[arr[0]] == num1 || m1[arr[0]] == num2) {
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	return;
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