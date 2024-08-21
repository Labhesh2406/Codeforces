#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;

	if (s.size() >= 3 && s.substr(0, 2) == "10" && s[2] != '0' && stoi(s.substr(2)) >= 2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)  {
		solve();
	}
	return 0;
}