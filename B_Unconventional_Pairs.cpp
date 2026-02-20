#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> ans;
    vector<ll> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int maxDiff = 0;
    for(int i= 0; i<n; i+=2) {
        ll diff = abs(a[i] - a[i+1]);
        maxDiff = max(maxDiff, (int)diff);
    }
    cout << maxDiff << endl;
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