#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    map<int, int> freq;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<pair<int, int>> v;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        v.push_back({it->second, it->first});
    }
    sort(v.begin(), v.end());
    int ans = (int)v.size();
    for (int i = 0; i < (int)v.size(); i++) {
        if (K < v[i].first)
            break;
        K -= v[i].first;
        ans--;
    }
    ans = max(ans, 1);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
