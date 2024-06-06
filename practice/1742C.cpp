#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		// cout << endl;
		char arr[8][8];
		int countR = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (arr[i][j] == 'R') countR++;
			}
			if (countR == 8) break;
			else countR = 0;
		}
		if (countR == 8) {
			cout <<  "R" << endl;
		}
		else {
			cout << "B" << endl;
		}
	}
	return 0;
}