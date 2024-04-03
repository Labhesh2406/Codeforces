#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	int steps[5] = {5, 4, 3, 2, 1};
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (n >= steps[i]) {
			count += (n / steps[i]);
			n = n % steps[i];
		}
	}
	cout << count << endl;
	return 0;
}