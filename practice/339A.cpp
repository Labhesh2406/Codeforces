#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s, ans;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] != '+') {
			ans.push_back(s[i]);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans[0];
	for (int i = 1; i < ans.size(); i++) {
		cout << "+" << ans[i];
	}
	return 0;
}