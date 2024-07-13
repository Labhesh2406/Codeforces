#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		vector<int>a(3);
		cin >> a[0] >> a[1] >> a[2];
		for (int i = 0; i < 5; i++) {
			sort(a.begin(), a.end());
			a[0] += 1;
		}
		cout << a[0]*a[1]*a[2] << endl;
	}
	return 0;
}