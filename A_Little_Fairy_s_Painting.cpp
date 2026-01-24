#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> distincts;
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            distincts.push_back(a[i]);
        }
    }

    int d_count = distincts.size();
    bool found_exact = false;
    int next_largest = -1;

    for (int i = 0; i < d_count; i++) {
        if (distincts[i] == d_count) {
            found_exact = true;
            break;
        }
        if (distincts[i] > d_count) {
            next_largest = distincts[i];
            break;
        }
    }
    if (found_exact) {
        cout << d_count << endl;
    } else if (next_largest != -1) {
        cout << next_largest << endl;
    } else {
        cout << d_count << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}