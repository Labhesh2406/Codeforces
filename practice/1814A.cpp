#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	if (n % 2 == 0) {
		cout << "YES" << endl;
		return;
	}
	if (k % 2) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
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