#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, h;
	cin >> n >> h;
	int ans = 0;
	int arr[n] ;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
		if (arr[i] <= h) {
			ans = ans + 1;
		}
		else {
			ans = ans + 2;
		}
	}
	cout << ans << endl;
	return 0;
}