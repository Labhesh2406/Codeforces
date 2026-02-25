#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> seq;
    int roots = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        while (!seq.empty() && seq.back() >= x) seq.pop_back();
        if (!seq.empty() && seq.back() == x - 1) { seq.push_back(x); }
        else {
            roots++;
            seq.clear();
            seq.push_back(x);
        }
    }
    cout << roots << endl;
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