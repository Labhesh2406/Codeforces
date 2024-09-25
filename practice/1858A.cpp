#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	a += (c + 1) / 2;
	b += c / 2;
	if (a > b) {
		cout << "First" << endl;
	}
	else {
		cout << "Second" << endl;
	}
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