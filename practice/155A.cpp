#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int cnt1 = 0;
	int cnt2 = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			cnt1 += 1;
		}
		else if (arr[i] < min) {
			min = arr[i];
			cnt2 += 1;
		}
	}
	cout << cnt1 + cnt2 << endl;
	return 0;
}