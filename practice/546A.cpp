#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int k, n, w;
	long long total = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++) {
		total = total + (i * k);
	}
	if (total <= n) cout << 0 << endl;
	else cout << total - n << endl;
	return 0;
}