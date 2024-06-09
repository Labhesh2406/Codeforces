#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n);
		long long cnt = 0, sm = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 1) {
				cnt++;
			}
			else {
				sm = sm + (a[i] - 1);
			}
		}
		if (n == 1) {
			cout << "NO" << endl;
			continue;
		}
		if (sm >= cnt) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}