#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;

	string a, b;
	cin >> a >> b;

	int ans = -1;
	for (int i = 0; i < 10; i++) {
		if (a.find(b) != string::npos) {
			ans = i;
			break;
		}
		a += a;
	}
	cout << ans << endl;
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