#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int cnt = 0;
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] % 2 != 0) cnt++;
		}
		if (cnt % 2 == 0) {
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}