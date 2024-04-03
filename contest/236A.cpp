#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int l = s.length();
	int ans = 0;
	for (int i = 1; i < l; i++) {
		if (s[i] != s[i - 1])
		{
			ans++;
		}
	}
	if (ans % 2 == 0) {
		cout << "IGNORE HIM!" << endl;
	}
	else {
		cout << "CHAT WITH HER!" << endl;
	}
	return 0;
}