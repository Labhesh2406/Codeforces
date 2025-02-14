#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin >> a;
    cout << a.substr(0, a.length() - 2) << "i" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}