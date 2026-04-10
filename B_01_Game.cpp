#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    string s; cin >> s;
    ll  a = 0, b = 0;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '0') a++;
        else b++;
    }
    if(min(a, b) % 2 == 1) {
        cout << "DA" << endl;
    } else {
        cout << "NET" << endl;
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