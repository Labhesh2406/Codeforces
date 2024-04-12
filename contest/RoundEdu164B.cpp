#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> arr;
		map<int, int>mp;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			arr.push_back(a);
			mp[a]++;
		}
		if (mp.size() == 1)
		{
			cout << -1 << endl;
			continue;
		}

		int prev = 0;
		int ans = n;
		for (int i = 0; i < n; i++) {
			if (arr[i] == arr[0]) {
				prev++;
			}
			else {
				ans = min(ans, prev);
				prev = 0;
			}
		}
		ans = min(ans, prev);
		cout << ans << endl;
	}
	return 0;
}