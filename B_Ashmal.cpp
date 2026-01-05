#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s;
    for(int i = 0; i < n; i++)  {
        string a; cin >> a;
        s = min(s+a, a+s);
    }
    cout << s << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}