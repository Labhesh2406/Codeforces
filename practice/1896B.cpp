#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int mn = n,   mx = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'A') mn = min(mn, i);
			else mx = i;
		}
		cout << max(0, mx - mn) << endl;
	}
	return 0;
}