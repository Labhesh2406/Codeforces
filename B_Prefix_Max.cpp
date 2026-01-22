#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    int max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }
    cout << max_val*n << "\n";
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