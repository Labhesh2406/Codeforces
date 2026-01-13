#include <bits/stdc++.h>
using namespace std;

void Solve() {
    long long s, k, m; 
    if (!(cin >> s >> k >> m)) return;

    if (m < k) {
        cout << max(0LL, s - m) << "\n";
        return;
    }

    long long flips = m / k;
    long long have;

    if (s <= k) {
        have = s;
    } else {
        if (flips % 2 == 0) {
            have = s;
        } else {
            have = k;
        }
    }
    long long elapsed_after_flip = m % k;
    long long ans = max(0LL, have - elapsed_after_flip);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}