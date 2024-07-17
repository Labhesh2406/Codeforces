#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s ;
	cin >> s;

	int c0 = 0, c1 = 0;
	int curr = 0;
	for (int i = 0; i <= n; ++i)
	{
		if (i == n || s[i] == '1') {
			if (curr) c0++, curr = 0;
		}
		if (s[i] == '1') {
			c1++;
		}
		else {
			curr++;
		}
	}
	cout << (c1 > c0 ? "YES" : "NO") << endl;
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