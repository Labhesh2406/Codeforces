#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		std::vector<string> s(n);

		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}

		for (int i = 0; i < n; i += k) {
			for (int j = 0; j < n; j += k) {
				cout << s[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}