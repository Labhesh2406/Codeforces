#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		int ans = log2(r);
		cout << ans << endl;
	}
	return 0;
}