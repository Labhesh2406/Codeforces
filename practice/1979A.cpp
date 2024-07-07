#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int>a(n) ;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count  = INT_MAX;
	for (int i = 1; i < n; i++) {
		count = min(count, max(a[i], a[i - 1]) - 1);
	}
	cout << count << endl;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}