#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(k);

		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int final = 0;
		for (int i = 0; i < k - 1; i++) {
			final += 2 * arr[i] - 1;
		}

		cout << final << endl;
	}
	return 0;
}