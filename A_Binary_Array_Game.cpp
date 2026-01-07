#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zeros++;
    }
    if (zeros > 1 && a[0] == 0 && a[n - 1] == 0)
        cout << "Bob\n";
    else
        cout << "Alice\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
