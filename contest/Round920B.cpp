#include <bits/stdc++.h>
using namespace std;

void tests() {
	long long n;
	cin >> n;
	string s, f;
	cin >> s >> f;

	if (s == f) {
		cout << 0 << endl;
		return;
	}

	long long s1, s0, f1, f0;
	s1 = s0 = f1 = f0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') s0++;
		else s1++;
		if (f[i] == '0') f0++;
		else f1++;
	}
	long long x, y;
	x = y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0' && f[i] == '1') {
			x++;
		}
		else if (s[i] == '1' && f[i] == '0') {
			y++;
		}
	}
	long long ans = min(x, y) + abs(x - y);
	cout << ans << endl;

}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		tests();
	}
	return 0;
}