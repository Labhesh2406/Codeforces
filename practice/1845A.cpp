#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k, x; cin >> n >> k >> x;
	if (x != 1)
	{
		cout << "YES" << '\n';
		cout << n << '\n';
		for (int i = 0; i < n; ++i) cout << 1 << ' '; cout << '\n';
	}
	else
	{
		if (k >= 2 && n % 2 == 0)
		{
			cout << "YES" << '\n';
			cout << n / 2 << '\n';
			for (int i = 0; i < n / 2; ++i) cout << 2 << ' '; cout << '\n';
		}
		else if (k >= 3)
		{
			cout << "YES" << '\n';
			cout << n / 2 << '\n';
			cout << 3 << ' ';
			for (int i = 1; i < n / 2; ++i) cout << 2 << ' '; cout << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
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