#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    for(char c : s) {
        st.empty() || st.top() != c ? st.push(c) : (void)st.pop();
    }
    cout << (st.empty() ? "YES" : "NO") << endl;
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