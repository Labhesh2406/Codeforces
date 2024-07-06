#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int l = 0, r = n - 1;
	while (s[l] == 'W') {
		l++;
	}
	while (s[r] == 'W') {
		r--;
	}
	int ans = r - l + 1;
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