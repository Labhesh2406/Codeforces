#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n ;
		cin >> n;
		if (n % 2) {
			cout << "NO" << endl;
			continue;
		}
		char ch = 'A';
		string ans = "";
		while (n) {
			ans = ans + ch;
			ans = ans + ch;
			ch++;
			n = n - 2;
		}
		cout << "Yes" << endl;
		cout << ans << endl;
	}
	return 0;
}