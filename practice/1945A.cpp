#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	long long sum = a;
	sum += b / 3;
	b = b % 3;

	if (b > 0 && 3 - b > c) {
		cout << -1 << endl;
		return;
	}

	if (b > 0) {
		sum++;
		c -= 3 - b;
	}
	b = 0;

	sum += (c + 2) / 3;
	cout << sum << endl;
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