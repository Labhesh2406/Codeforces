#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (c < d) swap(c, d);
		if (a < b) swap(a, b);

		bool check1 = true;
		bool check2 = true;

		for (int i = a; i < i + 11; i++) {
			int t = i % 12;
			if (t == 0) {
				t = 12;
			}
			if (t == c || t == d) {
				check1 = false;
				break;
			}
			if (t == b) break;
		}
		for (int i = a ; i > 0; i--) {
			if (i == c || i == d) {
				check2 = false;
				break;
			}
			if (i == b) break;
		}
		if (!check1 && !check2) {
			cout << "YES" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}