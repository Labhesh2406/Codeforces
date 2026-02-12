#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n+1); // for each element x in the permutation, -> what is the position of the element
    for(int i = 1; i<=n; i++) {
        int x; cin >> x;
        v[x] = i;
    }
    // 1 3 2 5 4
    // v[1] = 1
    // v[2] = 3
    // v[3] = 2
    // v[4] = 5
    // v[5] = 4
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    bool possible = true;
    for(int i = 1; i < n; i++) {
        if(v[a[i-1]] > v[a[i]]) {
            possible = false;
        }
    }
    cout << (possible ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}