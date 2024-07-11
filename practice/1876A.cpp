#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

	int t; cin >> t;
	while (t--) {
		long long int n, p;
		cin >> n >> p;
		vector<pair<long long int, long long int>> a(n);
		for (auto &i : a) cin >> i.second;
		for (auto &i : a) cin >> i.first;
		sort(a.begin(), a.end());
		long long int  ans = p;
		--n;
		for (auto i : a) {
			if (n <= 0 || i.first > p) break;
			ans += i.first * min(i.second, n);
			n -= min(i.second, n);
		}
		if (n) ans += n * p;
		cout << ans << endl;
	}
	return 0;
}