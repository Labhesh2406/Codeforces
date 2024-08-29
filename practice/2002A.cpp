#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n , m, k;
	cin >> n >> m >> k;

	cout << min(n, k) * min(m, k) << endl;
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