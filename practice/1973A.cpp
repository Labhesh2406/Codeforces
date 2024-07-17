#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a + b + c) & 1) {
			cout << " -1" << endl;
		}
		else
		{cout << ( a + b < c ? a + b : (a + b + c ) / 2 ) << endl;}
	}
	return 0;
}