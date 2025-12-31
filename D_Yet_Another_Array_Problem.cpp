#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<ll> primes = {
        2, 3, 5, 7, 11, 13, 17, 19,
        23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67,
    };

    for(ll x : primes) {
        for(ll v : a) {
            if(v % x != 0) {
                cout << x << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
