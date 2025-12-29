#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;

    ll w1 = 0, d1 = 0;
    ll w2 = 0, d2 = 0;
    ll layerSize = 1;
    int layers = 0;
    for (int i = 0; i < 60; i++) {
        if (i % 2 == 0) w1 += layerSize;
        else d1 += layerSize;
        if (i % 2 == 0) d2 += layerSize;
        else w2 += layerSize;
        if ((w1 <= a && d1 <= b) ||(w2 <= a && d2 <= b)) {
            layers++;
        } else {
            break;
        }

        layerSize *= 2;
    }
    cout << layers << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
