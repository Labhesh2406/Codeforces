#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

void solve() {
	ll n;
	cin >> n;
	vector<ll> set(n);
	for (ll i = 0; i < n; i++) {
		cin >> set[i];
	}
	ll g = set[0];
	for (ll i = 1; i < n; i++) {
		g = gcd(set[i], g);
	}
	cout << set[n - 1] / g << endl;

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