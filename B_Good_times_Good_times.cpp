#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    string x; cin >> x;
    cout << "1";
    x.pop_back();
    for(char c : x)
        cout << "0";
        cout << "1";
    cout << "\n";
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