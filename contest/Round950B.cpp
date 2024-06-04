#include <bits/stdc++.h>
#include <vector>
using namespace std;

// void solve() {
//     int n, f, k;
//     cin >> n >> f >> k;
//     vector<int>a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int fav = a[f - 1];
//     sort(a.begin(), a.end(), greater<int>());

//     int grt_cnt = 0, eql_cnt = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] > fav) {
//             grt_cnt++;
//         }
//         else if (a[i] == fav) {
//             eql_cnt++;
//         }
//     }
//     if (grt_cnt >= k) {
//         cout << "NO" << endl;
//     }
//     else if (grt_cnt + eql_cnt <= k) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "MAYBE" << endl;
//     }
// }

void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int>a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int fav = a[f - 1];

    sort(a.begin(), a.end(), greater<int>());
    if (k == n || a[k] < fav) {
        cout << "YES" << endl;
    }
    else if (a[k] == fav && a[k - 1] == fav) {
        cout << "MAYBE" << endl;
    }
    else {
        cout << "NO" << endl;
    }


}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}