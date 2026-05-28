#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll lcm(ll x, ll y) {
    ll g = gcd(x, y);
    return (x / g > 2e17 / y) ? (ll)2e17 : x / g * y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        ll a, b, c, m; cin >> a >> b >> c >> m;
        ll ab = lcm(a,b), ac = lcm(a,c), bc = lcm(b,c), abc = lcm(ab,c);
        ll A=m/a, B=m/b, C=m/c, AB=m/ab, AC=m/ac, BC=m/bc, ABC=m/abc;
        cout << (A-AB-AC+ABC)*6 + (AB-ABC)*3 + (AC-ABC)*3 + ABC*2 << " "
        << (B-AB-BC+ABC)*6 + (AB-ABC)*3 + (BC-ABC)*3 + ABC*2 << " "
        << (C-AC-BC+ABC)*6 + (AC-ABC)*3 + (BC-ABC)*3 + ABC*2 << "\n";
    }
}