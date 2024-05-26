#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		map<char, int> m;
		for (char &c : s) {
			m[c]++;
		}
		if (m.size() == 1) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (int i = 1; i < s.length(); i++) {
				if (s[i] != s[i - 1]) {
					swap(s[i], s[i - 1]);
					break;
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}