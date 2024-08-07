#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int x = (int(a1 > b1) - int(a1 < b1) + int(a2 > b2) - int(a2 < b2)) > 0;
	int y = (int(a1 > b2) - int(a1 < b2) + int(a2 > b1) - int(a2 < b1)) > 0;

	cout << (x + y) * 2 << endl;

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