#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 0 && n == 1 && n == 2) cout << 0 << endl;
		else {
			int b = n / 2;
			if (n % 2 != 0) cout << b << endl;
			else cout << b - 1 << endl;
		}
	}
}