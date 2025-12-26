#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;

    ll top = 0, bottom = 0, both = 0;
    for(auto &it:s) {
        if(it == '0') top+=1;
        else if(it == '1') bottom+=1;
        else both+=1;
    }
    if(n == k) {
        for(int i =0; i<n; i++) cout << '-';
        cout << endl;
        return;
    }
    ll maxTop = top + both;
    ll maxBottom = bottom + both;

    for(int i = 1; i<=n; i++){
        if((i<= top) || (i> (n-bottom)) || (n == both)) cout << '-';
        else if((i <= maxTop) || (i > (n - maxBottom))) cout << '?';
        else cout << '+';
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}