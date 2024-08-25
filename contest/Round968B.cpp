#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 1e5 + 5;

void solve() {
	int arr[MAX_SIZE];
	int count;
	cin >> count;

	for (int i = 1; i <= count; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + 1 + count);
	cout << arr[count / 2 + 1] << '\n';
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}