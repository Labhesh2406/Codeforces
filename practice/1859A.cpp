#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	if (a.back() == a[0]) {
		cout << "-1" << endl;
		return;
	}
	else {
		int it = 0;
		while (a[it] == a[0]) {
			it++;
		}
		cout << it << " " << n - it << endl;
		for (int j = 0; j < it; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
		for (int j = it; j < n; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
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