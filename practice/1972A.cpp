#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, count = 0, j = 0;
		cin >> n;
		vector<int>a(n);
		vector<int>b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] > b[j++]) {
				count++;
				i--;
			}
			if (j > n - 1)break;
		}
		cout << count << endl;
	}
	return 0;
}