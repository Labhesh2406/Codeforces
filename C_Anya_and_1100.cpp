#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();

    int cnt = 0;

    auto check = [&](int i, int v){
        if (i >= 0 && i + 3 < n){
            bool good = s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';

            if (good){
                cnt += v;
            }
        }
    };
    for (int i = 0; i < n; i++){
        check(i, 1);
    }
    int q; cin >> q;
    while (q--){
        int i; cin >> i;
        i--;
        char v; cin >> v;

        for (int j = i - 5; j <= i + 5; j++){
            check(j, -1);
        }
        s[i] = v;
        for (int j = i - 5; j <= i + 5; j++){
            check(j, +1);
        }
        if (cnt > 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}