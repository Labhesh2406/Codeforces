#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,  a, b;
	cin >> n >> a >> b;
	if (a > b) {
		cout << n*a << endl;
		return ;
	}
	ll k;
	k = min(b - a, n);
	ll r = b - k;
	ll ans = (b * b + b) / 2 - (r * r + r) / 2;

	if (k < n) {
		ans += a * (n - k);
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