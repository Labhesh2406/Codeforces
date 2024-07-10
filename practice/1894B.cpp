#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int>b(n, 1);
	vector<int>cnt(101, 0);

	bool twoDone = false, threeDone =  false;

	for (int i = 0; i < n; i++) {
		cnt[a[i]]++;

		if (cnt[a[i]] == 2) {
			if (!twoDone) {
				b[i] = 2;
				twoDone = 1;
			}
			else if (!threeDone) {
				b[i] = 3;
				threeDone = 1;
			}
		}
	}

	if (threeDone == false) {
		cout << -1 << endl;
		return;
	}

	for (int x : b) {
		cout << x << " ";
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