#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> ans;
    ans.push_back(a[0]);

    for (int i = 1; i < n; i++) {
        if (a[i] >= ans.back()) {
            ans.push_back(a[i]);
        }
    }
    cout << (n - ans.size()) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}