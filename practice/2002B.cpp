#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	bool ok = false;
	if (a == b) ok = true;
	reverse(b.begin(), b.end());

	if (a == b) ok = true;
	if (ok) {
		cout << "Bob" << endl;
	}
	else {
		cout << "Alice" << endl;
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