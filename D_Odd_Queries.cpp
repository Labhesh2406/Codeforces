#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, q; cin >> n >> q;
    ll sum[n + 1];
    sum[0] = 0;
    for (int i = 1; i <= n; ++i)
	{
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}
	while (q--)
	{
		ll l, r, k; cin >> l >> r >> k;
		ll val = sum[n] - (sum[r] - sum[l - 1]) + (r - l + 1) * k;
		if (val % 2 == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}