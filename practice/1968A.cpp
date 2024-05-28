#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		long long ans = 0;
		long long y = 0;
		for (int i = 1; i < x; i++) {
			long long xx = gcd(x, i) + i;
			if (xx > ans) {
				ans = xx;
				y = i;
			}
		}
		cout << y << endl;
	}
	return 0;
}