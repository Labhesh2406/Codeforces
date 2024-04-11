#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if (b < 2 * a) {
		int ans = ((n / 2 ) * b + (n % 2) * a);
		cout << ans << endl;
	}
	else {
		cout << (n * a) << endl;
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