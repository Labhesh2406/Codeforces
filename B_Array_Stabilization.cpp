#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    if (n == 2) {
        cout << 0 << '\n';
        return 0;
    }
    int remove_min = a[n-1] - a[1];
    int remove_max = a[n-2] - a[0];
    cout << min(remove_min, remove_max) << '\n';
    return 0;
}
