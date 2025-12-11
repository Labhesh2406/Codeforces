#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> binary;
    for (int i = 0; i < n; i++) if (s[i] == '1')
    {
        binary.push_back(i);
    }
    if (binary.empty())
    {
        cout << 0 << endl;
        return;
    }
    int maxGap = 0;
    int m = binary.size();
    for (int i = 0; i < m; i++) {
        int cur = binary[i];
        int nxt = binary[(i + 1) % m];
        int gap = (nxt - cur - 1 + n) % n;
        maxGap = max(maxGap, gap);
    }
    cout << maxGap << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
    return 0;
}
