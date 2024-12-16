#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    a = min(a, m);
    b = min(b, m);
    int total_seat = 2*m;
    total_seat = total_seat - a;
    total_seat = total_seat - b;
    c = min(total_seat, c);

    cout << a + b + c << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}