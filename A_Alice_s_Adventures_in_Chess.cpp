#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string s; cin >> s;

    int x = 0, y = 0;
    for(int i = 0; i<1000*n; i++) {
        if(x == a && y == b) {
            cout << "YES" << "\n";
            return;
        }
        if(s[i % n] == 'N') 
            y++;
        else if(s[i % n] == 'S')
            y--;
        else if(s[i % n] == 'E')
            x++;
        else 
            x--;
    }
    cout << "NO" <<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}