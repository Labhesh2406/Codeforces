#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int lsum = 0;
		int rsum = 0;
		string str;
		cin >> str;
		int n = str.length();
		for (int i = 0; i < n / 2; i++) {
			lsum += str[i];
		}
		for (int i = n; i >= n / 2; i--) {
			rsum += str[i];
		}
		if (lsum == rsum) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}