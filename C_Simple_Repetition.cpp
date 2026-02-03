#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool is_prime(ll n) {
    if(n <= 1) return false;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    ll x, k; cin >> x >> k;
    if(k > 1 && x > 1) {
        cout << "NO" << endl;
        return;
    }
    else if(k == 1){
        cout << (is_prime(x) ? "YES" : "NO") << endl;
    }
    else{
        cout << ((k == 2) ? "YES" : "NO") << endl;
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