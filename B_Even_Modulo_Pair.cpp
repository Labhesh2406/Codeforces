#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll &x : arr) cin >> x;
    for(ll i = 0; i<n; i++) {
        for(ll j = i+1; j<n; j++) {
            if((arr[j] % arr[i]) % 2 == 0) {
                cout << arr[i] << " " << arr[j] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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