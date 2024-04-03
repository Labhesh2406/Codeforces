#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	double ans = 0;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum = sum + arr[i];
	}
	ans = sum / n;
	cout << ans;

	return 0;
}