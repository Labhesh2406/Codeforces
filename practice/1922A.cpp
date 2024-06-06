#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		string a, b, c;
		cin >> n >> a >> b >> c;

		bool ans = false;
		for (int i = 0; i < n; i++) {
			if (a[i] != c[i] && b[i] != c[i]) {
				ans = true;
			}
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
	return 0;
}