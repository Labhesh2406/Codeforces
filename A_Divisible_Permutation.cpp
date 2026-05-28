#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> answer(n);
    int left = 1, right = n;
    int index = n - 1;
    bool pickLeft = false;
    while (index >= 0) {
        if (pickLeft) {
            answer[index] = left;
            left++;
        } else {
            answer[index] = right;
            right--;
        }
        pickLeft = !pickLeft;
        index--;
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << answer[i];
    }
    cout << endl;
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