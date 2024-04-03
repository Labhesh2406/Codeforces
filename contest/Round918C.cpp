#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int k;
	cin >> k;
	while (k--) {
		long long int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long int sum = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + arr[i];
		}
		long long int sr = sqrt(sum);
		if (sr * sr == sum) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}