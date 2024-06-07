#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool yes = false;

		for (int i = 0; i < n; i++) {
			int v = 0;
			bool done = true;
			for (int j = i; j < n; j++) {
				if (a[j] < v) done = false;
				v = a[j];
			}
			for (int j = 0; j < i; j++) {
				if (a[j] < v) done  = false;
				v = a[j];
			}
			yes = yes || done;
		}
		if (yes) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}