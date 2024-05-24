#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while ( t--) {
		int n;
		string str;
		cin >> n >> str;

		vector<char>v;
		for (int i = 0; i < n; i++) {
			v.push_back(str[i]);
		}
		sort(v.begin(), v.end());
		v.resize(unique(v.begin(), v.end()) - v.begin());
		int m = v.size();

		for (int i = 0; i < n; i++) {
			int idx = lower_bound(v.begin(), v.end(), str[i]) - v.begin();
			str[i] = v[m - 1 - idx];
		}
		cout << str << endl;
	}
	return 0;
}