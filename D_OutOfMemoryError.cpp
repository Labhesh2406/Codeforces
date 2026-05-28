#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Op {
    int b;
    long long c;
};

void solve() {
    int n, m;
    long long h;
    cin >> n >> m >> h;

    vector<long long> a_orig(n);
    for (int i = 0; i < n; i++) cin >> a_orig[i];

    vector<Op> ops(m);
    for (int i = 0; i < m; i++) {
        cin >> ops[i].b >> ops[i].c;
        ops[i].b--; // 0-indexed
    }

    int last_crash_idx = -1;
    // We use a map (or a vector + timestamp) to track changes 
    // since the last reset without actually looping through n elements.
    map<int, long long> current_changes; 

    for (int i = 0; i < m; i++) {
        int idx = ops[i].b;
        long long val_after_op;
        // If this element hasn't been changed since the last crash, 
        // start from original. Otherwise, start from its last modified value.
        if (current_changes.find(idx) == current_changes.end()) {
            val_after_op = a_orig[idx] + ops[i].c;
        } else {
            val_after_op = current_changes[idx] + ops[i].c;
        }

        if (val_after_op > h) {
            last_crash_idx = i;
            current_changes.clear(); // "Virtual" reset: O(1) or O(unique modified elements)
        } else {
            current_changes[idx] = val_after_op;
        }
    }

    // Now apply only the operations that happened AFTER the last crash
    for (int i = last_crash_idx + 1; i < m; i++) {
        a_orig[ops[i].b] += ops[i].c;
    }

    for (int i = 0; i < n; i++) {
        cout << a_orig[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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