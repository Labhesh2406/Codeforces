#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int sum = 0;

	for (int i = 0; i < n - 1; i++) {
		int x;
		cin >> x;
		sum -= x;
	}
	cout << sum << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve() ;
	}
	return 0;
}