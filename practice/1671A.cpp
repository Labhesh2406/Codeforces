#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int flag = 1;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			int cnt = 1;
			while (s[i ] == s[i + 1] && i + 1 < s.size()) {
				cnt++;
				i++;
			}

			if (cnt < 2) {
				flag = 0;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}