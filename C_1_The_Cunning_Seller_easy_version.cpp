#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const ll N = 30;
ll p[N];

ll fun(ll x) {
    return p[x+1] + x*p[x-1];
}

void solve() {
    ll n; cin >> n;

    ll ans = 0;
    ll x = 0;

    while(n > 0) {
        ans += fun(x) * (n % 3);
        n /= 3;
        x++;
    }
    cout << ans << '\n';
}

int main() {
    p[0] = 1;
    for(ll i = 1; i < N; i++) p[i] = p[i-1] * 3;


    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}