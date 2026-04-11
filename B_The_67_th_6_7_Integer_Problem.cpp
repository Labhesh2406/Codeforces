#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n = 7;
    vector<ll> a(n);
    for(int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for(int i = 0; i<7; i++) {
        sum -= a[i];
    }
    sum  = sum + a[n-1]*2 ;
    cout << sum << endl;
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