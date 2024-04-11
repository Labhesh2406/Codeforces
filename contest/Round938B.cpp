#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int c[n * n], d[n * n], find[n], f = INT_MAX;
    for (int i = 0; i < (n * n); i++) {
        cin >> c[i];
        find[i] = 0;
    }
    sort(c, c + (n * n));
    f = c[0];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        find[i] = (f + (i * b));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            d[i * n + (j)] = (find[i] + (a * j));
        }
    }
    sort(d, d + (n * n));
    for (int i = 0; i < (n * n); i++) {
        if (c[i] != d[i]) {
            ans = 1;
            break;
        }
    }
    if (ans == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}