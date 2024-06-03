#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
	long long n;
	cin >> n;
	long long a[n], b[n];
	long long ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ans += a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	if (n == 1) {
		cout << ans << endl;
		return;
	}

	long long suffix[n];
	suffix[n - 1] = b[n - 1];

	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i - 1] + b[i];
	}

	long long pre = b[0];
	long long nxt = suffix[1];
	for (int i = 1; i < n - 1; i++) {
		nxt = min(nxt, pre + suffix[i + 1]);
		pre += b[i];
	}
	nxt = min(nxt, pre);
	long long final = ans + nxt;
	cout << final << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	while (t--) {
		solve();
	}
	return 0;
}