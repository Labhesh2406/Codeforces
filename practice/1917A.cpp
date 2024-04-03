#include<bits/stdc++.h>
using namespace std;

int main() {

	int tt;
	cin >> tt;
	while (tt--) {
		int n, zero = 0, neg = 0; cin >> n;

		vector<int>a(n);
		for (int i = 0; i < n; i++) cin >> a[i];

		for (auto &i : a)
		{
			neg += (i < 0);  // boolean statements return true or false values like 1 or 0
			zero += (i == 0);
		}

		if (zero || neg % 2 == 1)
		{
			cout << 0 << "\n";
		}
		else
		{
			cout << 1 << "\n";
			int idx = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0) idx = i;
			}
			cout << idx + 1 << " " << 0 << "\n";
		}
	}
}