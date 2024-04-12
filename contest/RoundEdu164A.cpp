#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		if (n - (n / m + (n % m != 0)) <= k) cout << "No" << endl;
		else cout << "yes" << endl;
	}
	return 0;
}