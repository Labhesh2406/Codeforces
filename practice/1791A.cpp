#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int count = false;
		string s = "codeforces";
		char ch;
		cin >> ch;
		for (int i = 0; i < s.length(); i++) {
			if (ch == s[i]) count = true;
		}
		if (count) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}