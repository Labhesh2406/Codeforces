#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		int res = n % 10;
		if (res == 0) {
			n = n / 10;
		}
		else {
			n = n - 1;
		}
	}
	cout << n << endl;
	return 0;
}