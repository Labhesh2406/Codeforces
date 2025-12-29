#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if (s.find("2026") != string::npos) {
        cout << 0 << endl;
        return;
    }
    if (s.find("2025") == string::npos) {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
