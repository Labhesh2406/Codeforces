#include <bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n, m;
// 		cin >> n >> m;
// 		string s;
// 		cin >> s;

// 		map<char, int>count;
// 		for (char ch : s) {
// 			count[ch]++;
// 		}

// 		int needed = 0;
// 		for (char level = 'A'; level <= 'G'; level++) {
// 			if (count[level] < m) {
// 				needed = needed + (m - count[level]);
// 			}
// 		}
// 		cout << needed << endl;
// 	}
// 	return 0;
// }


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		string s;
		cin >> n >> m >> s;
		vector<int> cnt(7, m);

		for (auto e : s) {
			cnt[e - 'A']--;
			cnt[e - 'A'] = max(0, cnt[e - 'A']);
		}
		cout << accumulate(cnt.begin(), cnt.end(), 0) << endl;
	}
	return 0;
}