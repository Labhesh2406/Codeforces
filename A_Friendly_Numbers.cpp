#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll digitSum(ll n) {
    ll sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    ll n; ll count = 0;
    cin >> n;
    for(ll y = n ; y <= n + 90; y++) {
        if(y - digitSum(y) == n) count++;
    }
    cout << count << "\n";
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
