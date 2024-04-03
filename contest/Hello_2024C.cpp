#include <iostream>
using namespace std;
#define int long long

int32_t main(int argc, char const *argv[])
{
	int t;
	cin > . t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vector<int> left(n), right(n);

		left[0] = 0;
		for (int i = 1; i < n; i++) {
			left[i] = left[i - 1] + (a[i] < a[i + 1]);
		}

		right[n - 1] = 0;
		for (int i = n - 2; i >= 0; i--) {
			right[i] = right[i + 1] + (a[i] < a[i + 1]);
		}

		int penalty = min(left[n - 1], right[0]);

		for (int i = 0; i < n; i++) {
			penalty = min(penalty, left[i] + right[i + 1]);
		}
		cout << penalty << endl;
	}
	return 0;
}