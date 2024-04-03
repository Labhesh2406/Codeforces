#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	int count1 = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) count1++;
	}
	if (count1 > 0) {
		cout << "HARD" << endl;
	}
	else {
		cout << "EASY" << endl;
	}
	return 0;
}