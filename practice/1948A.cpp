#include <bits/stdc++.h>
#define pn cout<<"NO\n";
using namespace std;

void test() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int curr = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < curr) {
			pn return;
		}
		else {
			int x = arr[i] / 10;
			int y = arr[i] % 10;
			if (x >= curr) {
				if (y >= x) {
					curr = y;
				}
				else {
					curr = arr[i];
				}
			}
			else {
				curr = arr[i];
			}
		}
	}
	cout << "YES" << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		test();
	}
	return 0;
}