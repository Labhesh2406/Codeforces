#include <bits/stdc++.h>
using namespace std;

bool canSort(vector<long long>& a, long long k) {
    int n, i, j, root;
    vector<long long> sorted_a, vals, sorted_vals;
    vector<int> parent;
    map<int, vector<long long>> comp, sorted_comp;
    n = a.size();
    sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    if (a == sorted_a) return true;
    parent.resize(n);
    iota(parent.begin(), parent.end(), 0);
    function<int(int)> find = [&](int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    };
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (abs(a[i] - a[j]) >= k) {
                parent[find(i)] = find(j);
            }
        }
    }
    for (i = 0; i < n; i++) {
        comp[find(i)].push_back(a[i]);
        sorted_comp[find(i)].push_back(sorted_a[i]);
    }
    for (auto& p : comp) {
        root = p.first;
        vals = p.second;
        sorted_vals = sorted_comp[root];
        sort(vals.begin(), vals.end());
        sort(sorted_vals.begin(), sorted_vals.end());
        if (vals != sorted_vals) return false;
    }
    return true;
}

int main() {
    int t, n, i, j;
    long long answer;
    vector<long long> a, sorted_a;
    set<long long> diffs;
    set<long long>::reverse_iterator it;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        a.clear();
        a.resize(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        if (a == sorted_a) {
            cout << -1 << "\n";
            continue;
        }
        diffs.clear();
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                diffs.insert(abs(a[i] - a[j]));
            }
        }
        answer = -1;
        for (it = diffs.rbegin(); it != diffs.rend(); it++) {
            if (canSort(a, *it)) {
                answer = *it;
                break;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}