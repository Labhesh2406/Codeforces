#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		if (arr[0] != arr[1] && arr[0] != arr[2]) {
			cout << 1 << endl;
		} else if (arr[1] != arr[0] && arr[1] != arr[2]) {
			cout << 2 << endl;
		} else if (arr[2] != arr[0] && arr[2] != arr[1]) {
			cout << 3 << endl;
		} else {
			for (int i = 3; i < n; i++) {
				if (arr[i] != arr[i - 1] && arr[i] != arr[i - 2]) {
					cout << i + 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}
