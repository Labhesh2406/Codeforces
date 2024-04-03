#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		long long int n, a = 1, cnt = 0;
		long long int mx = 0;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] != 0) a *= arr[i];
			if (arr[i] == 0) cnt++;
		}
		if (cnt > 1) {
			cout << 0 << endl;
			continue;
		}
		else if (cnt == 1) {
			cout << a << endl;
			continue;
		}
		mx = a;
		for (int i = 0; i < n; i++) {
			//if(arr[i] == 0)
			long long int temp = a / arr[i];
			temp *= (arr[i] + 1);
			mx = max(mx, temp);
		}
		cout << mx << endl;
	}
	return 0;
}