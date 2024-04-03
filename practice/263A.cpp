#include <bits/stdc++.h>
using namespace std;

int main() {
	int moves = 0;
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int item;
			cin >> item;
			arr[i][j] = item;

			if (item == 1)
			{
				if (j >= 2) {
					moves = moves + j - 2;
				}
				else {
					moves = moves + 2 - j;
				}
				if (i >= 2) {
					moves = moves + i - 2;
				}
				else {
					moves = moves + 2 - i;
				}
			}
		}
	}
	cout << moves << endl;
}