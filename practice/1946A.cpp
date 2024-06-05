#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int i = (n + 1) / 2 - 1;
		int j = i;
		while (j < n && arr[i] == arr[j]) j++;
		cout << (j - i) << endl;
	}
	return 0;
}