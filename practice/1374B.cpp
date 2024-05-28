#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long s1 = 0, s2 = 0;
		while (n % 2 == 0) {
			s1++;
			n = n / 2;
		}
		while (n % 3 == 0) {
			s2++;
			n = n / 3;
		}
		if (n == 1) {
			if (s1 <= s2) {
				long long ans = min(s1, s2);
				s1 = s1 - ans;
				s2 = s2 - ans;
				ans += s2 * 2;
				cout << ans << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else
			cout << -1 << endl;
	}
	return 0;
}