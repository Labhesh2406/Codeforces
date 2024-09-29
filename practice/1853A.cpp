#include <bits/stdc++.h>
using namespace std;

const int maxN = 550;
int a[maxN];

int main() {
	int T;
	for (cin >> T; T; T--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		int mn = 1e9;
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) mn = 0;
			else mn = min(mn, (a[i] - a[i - 1]) / 2 + 1);
		}
		cout << mn << '\n';
	}
	return 0;
}