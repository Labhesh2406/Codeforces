#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}

	int min = arr[0];
	int min_index = 0;
	int max = arr[0];
	int max_index = 0;

	for (int i = 0; i < n; i++) {
		if (min >= arr[i]) {
			min = arr[i];
			min_index = i;
		}
		if (max < arr[i]) {
			max = arr[i];
			max_index = i;
		}
	}

	if (min_index < max_index) {
		min_index = (n - 1) - min_index;
		cout << min_index + max_index - 1 << endl;
	}
	else {
		min_index = (n - 1) - min_index;
		cout << min_index + max_index << endl;
	}

	return 0;
}