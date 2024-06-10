#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (a[0] == a[n - 1]) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			cout << "RB";
			for (int i = 0; i < n - 2; i++) {
				cout << "R";
			}
			cout << endl;
		}
	}
	return 0;
}