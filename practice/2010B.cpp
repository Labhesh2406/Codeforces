#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;
	if ((a == 1 || b == 1) && (b == 2 || a == 2)) {
		cout << 3 << endl;
	}
	else if ((a == 1 || b == 1) && (a == 3 || b == 3)) cout << 2;
	else cout << 1 << endl;
	return 0;
}