#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b == c) {
			cout << "+" << endl;
		}
		else {
			cout << "-" << endl;
		}
	}
	return 0;
}