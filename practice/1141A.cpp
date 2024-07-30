#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;

	if (m % n != 0) {
		cout << -1 << endl;
		return 0;
	}
	int r = m / n;
	int ans = 0;
	while (r % 2 == 0) ans++, r /= 2;
	while (r % 3 == 0) ans++, r /= 3;
	if (r != 1) cout << -1;
	else cout << ans ;
	return 0;
}