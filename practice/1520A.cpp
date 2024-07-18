#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < n; i++)
	{
		int j = i + 1;
		while (j < n && s[j] == s[i])
			j++;

		for (int k = j + 1; k < n; k++)
		{
			if (s[k] == s[i])
			{
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}