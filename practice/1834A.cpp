#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n ;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == -1) a++;
		else b++;
	}
	int ans = 0;
	if (a % 2 == 1) a--, b++, ans++;
	while (a > b) {
		a -= 2;
		b += 2;
		ans += 2;
	}

	cout << ans << endl;
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