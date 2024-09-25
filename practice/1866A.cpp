#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;

	int ans = 1E9;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		ans = min(ans, abs(x));
	}
	cout << ans << endl;

	return 0;
}