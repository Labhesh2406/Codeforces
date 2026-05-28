#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    auto vertical = [&](int i){
        return (s1[i] != s2[i]) ? 1 : 0;
    };

    auto horizontal = [&](int i){
        int cost = 0;
        if(s1[i] != s1[i+1]) cost++;
        if(s2[i] != s2[i+1]) cost++;
        return cost;
    };

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        if(dp[i] == INT_MAX) continue;
        dp[i+1] = min(dp[i+1], dp[i] + vertical(i));
        if(i + 1 < n)
            dp[i+2] = min(dp[i+2], dp[i] + horizontal(i));
    }
    cout << dp[n] << "\n";
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