#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int smallestRotation(const vector<int>& a) {
    int n = a.size();
    if (n == 0) return 0;
    int i = 0, j = 1;
    while (i < n && j < n) {
        int k = 0;
        while (k < n && a[(i + k) % n] == a[(j + k) % n]) k++;
        if (k >= n) break;
        if (a[(i + k) % n] > a[(j + k) % n])
            i = i + k + 1;
        else
            j = j + k + 1;
        if (i == j) j++;
    }
    return min(i, j);
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<int> LR, M;
    LR.reserve(n - (y - x));
    M.reserve(y - x);

    for(int i = 0; i < x; i++) LR.push_back(p[i]);
    for(int i = x; i < y; i++) M.push_back(p[i]);
    for(int i = y; i < n; i++) LR.push_back(p[i]);

    int m_len = (int)M.size();
    int lr_len = (int)LR.size();
    if(m_len == 0){
        for(int i = 0; i < lr_len; i++)
            cout << LR[i] << " \n"[i + 1 == lr_len];
        return;
    }

    int rotation = smallestRotation(M);
    int m0 = M[rotation];
    if(lr_len == 0){
        for(int i = 0; i < m_len; i++)
            cout << M[(rotation + i) % m_len] << " \n"[i + 1 == m_len];
        return;
    }
    int insert = lr_len;
    for(int i = 0; i < lr_len; i++){
        if(LR[i] > m0){
            insert = i;
            break;
        }
    }

    int out = 0;
    for(int i = 0; i < insert; i++)
        cout << LR[i] << " \n"[++out == n];
    for(int i = 0; i < m_len; i++)
        cout << M[(rotation + i) % m_len] << " \n"[++out == n];
    for(int i = insert; i < lr_len; i++)
        cout << LR[i] << " \n"[++out == n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}