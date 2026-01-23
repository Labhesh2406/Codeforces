#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int mx = 0, val = arr[i];
        for(int j = i; j < n; ++j) {
            if(val == arr[j] ) {
                mx++; val++;
            }
        }
        ans = max(ans, mx);
    }
    cout << ans << endl;
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