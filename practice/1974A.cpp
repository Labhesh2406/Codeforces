#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x, y;
	cin >> x >> y;
	int a = (y + 1) / 2;
	int rem = a * 15 - (y * 4);

	if (x > rem) {
		a += (x - rem + 14) / 15;
	}
	cout << a << endl;
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