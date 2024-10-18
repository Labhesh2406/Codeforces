#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, i, j;
	cin >> n;
	string s;
	cin >> s;
	for (i = 0, j = n - 1; i < j; i++, j--) {
		if (s[i] == s[j])
			break;
	}
	cout << j - i + 1 << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}