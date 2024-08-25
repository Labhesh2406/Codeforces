#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> alpha(26, 0);
	for (char c : s) {
		alpha[c - 'a']++;
	}
	string ans = "";

	while (ans.size() != n) {
		for (int j = 0; j < 26; ++j) {
			if (alpha[j] != 0) {
				alpha[j]--;
				ans += char('a' + j);
			}
		}
	}
	cout << ans << endl;
}

int main() {
	int y;
	cin >> y;
	for (int i = 0; i < y; ++i) {
		solve();
	}
	return 0;
}
