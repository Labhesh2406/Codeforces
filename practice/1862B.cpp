#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (i && a.back() > x) {
			a.push_back(1);
		}
		a.push_back(x);
	}
	cout << a.size() << endl;
	for (int j : a) {
		cout << j << " ";
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