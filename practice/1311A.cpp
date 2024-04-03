#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		int ans = 0,	 dis = 0;
		cin >> a >> b;
		if (a == b) {
			cout << 0 << endl;;
			continue;
		}
		if (a > b) {
			dis = a - b;
			ans++;
			if (dis % 2 != 0) {
				ans++;
			}
		}
		else if (a < b) {
			dis = b - a;
			ans++;
			if (dis % 2 != 1) {
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}