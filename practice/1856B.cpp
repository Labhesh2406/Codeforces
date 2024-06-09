#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long sum = 0;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++ ) {
			sum = sum + a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) sum -= 2;
			else sum -= 1;
		}
		if (n == 1 || sum < 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}