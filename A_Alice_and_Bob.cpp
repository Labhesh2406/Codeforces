#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, a; cin >> n >> a;
    vector<ll> v(n);
    int c0 = 0, c1 = 0;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] < a) c0++;
        if(v[i] > a) c1++;
    }
    if(c0 >= c1) {
        cout << a-1 << endl;
    } else {
        cout << a+1 << endl;
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