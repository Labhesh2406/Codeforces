#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int ceilDiv(int a, int b) {
    return (a + b - 1) / b;
}

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    ll init = 0;
    for (char c : s) {
        if (c == '1') init++;
    }
    if (init == 0) {
        cout << ceilDiv(n, 3) << "\n";
        return;
    }

    ll sum = 0;
    int i = 0;
    while (i < n) {
        if (s[i] == '1') {
            i++;
            continue;
        }
        int j = i;
        while (j < n && s[j] == '0') {
            j++;
        }
        int diff = j - i;
        bool left = (i > 0 && s[i - 1] == '1');
        bool right = (j < n && s[j] == '1');

        if (left && right) {
            sum += ceilDiv(max(0, diff - 2), 3);
        } else {
            sum += ceilDiv(max(0, diff - 1), 3);
        }

        i = j;
    }
    cout << init + sum << "\n";
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