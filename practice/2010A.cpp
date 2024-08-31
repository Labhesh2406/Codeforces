#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		vector<int> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i % 2 == 0) {
				ans += a[i];
			}
			else {
				ans -= a[i];
			}
		}

		cout << ans << endl;
	}
	return 0;
}