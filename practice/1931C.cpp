#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int v[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int left = 1;
		int right = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] != v[i - 1]) break;
			left++;
		}
		for (int i = n - 2; i >= 0; i--) {
			if (v[i] != v[i + 1]) break;
			right++;
		}
		int sum = 0;
		if (v[0] == v[n - 1]) {
			sum = min(n, left + right);
		}
		else {
			sum = min(n, max(left, right));
		}
		cout << (n - sum) << endl;
	}
	return 0;
}