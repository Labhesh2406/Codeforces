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
		sort(s.begin(), s.end());
		string t = "Timur";
		sort(t.begin(), t.end());
		if (s == t) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;

	}
	return 0;
}