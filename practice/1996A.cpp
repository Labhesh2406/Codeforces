#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		n = n / 2;
		cout << n / 2 + n % 2 << endl;
	}
	return 0;
}