#include <bits/stdc++.h>
using namespace std;

int main() {

	int t ;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> ans;
		for (int i = 0; i < k; i++) {
			ans.push_back(n - i);
		}
		for (int i = 0; i < n - k; i++) {
			ans.push_back(i + 1);
		}
		for (int i = n - 1; i >= 0; i--) {
			cout << ans[i] << " " ;
		}
		cout << endl;
	}
}