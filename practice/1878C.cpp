#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		long long int n, k, x;
		cin >> n >> k >> x;
		long long int smin = (k * (k + 1)) / 2;
		long long int stotal = (n * (n + 1)) / 2;
		long long int smax = stotal - ((n - k) * (n - k + 1)) / 2;
		if (x >= smin && x <= smax) {
			cout << "yes" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}