#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int sleep_count = 0;
    int wake_until = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            wake_until = max(wake_until, i + k);
        }
        if (i > wake_until && s[i] == '0') {
            sleep_count++;
        }
    }
    cout << sleep_count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}