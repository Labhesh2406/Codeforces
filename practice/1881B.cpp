#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);

	ll op = 0;
	if (arr[1] % arr[0] == 0 && arr[2] % arr[0] == 0) {
		op = op + (arr[1] / arr[0] - 1);
		op = op + (arr[2] / arr[0] - 1);
	}
	else {
		cout << "NO" << endl;
		return;
	}
	if (op <= 3) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}