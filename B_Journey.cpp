#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a,b,c;
    cin >> a >> b >> c;
    int s = a + b + c;
    int t = n/s;
    n = n%s;
    t = t*3;

    for(auto x : {a,b,c}) {
        if(n > 0) {
            n -= x;
            t++;
        }
    }
    cout << t << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}