#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve()
{
    ll n, m; cin >> n >> m;
    ll prev = -1;
    ll curr = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        if (x == prev) curr++;
        else {
            curr = 1;
            prev = x;
        }
        mx = max(mx, curr);
    }
    if (mx >= m) cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}