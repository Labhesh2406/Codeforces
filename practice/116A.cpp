#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int capacity = 0;
	int stillNow = 0;
	while (t--) {
		int a, b;
		cin >> a >> b;
		stillNow = stillNow - a;
		stillNow = stillNow + b;
		capacity = max(capacity, stillNow);
	}
	cout << capacity << endl;
	return 0;
}