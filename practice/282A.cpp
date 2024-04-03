#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int x = 0;
	string s;
	while (n--) {
		cin >> s;
		if (s == "X++" || s == "++X") x++;
		else x--;
	}
	cout << x << endl;
	return 0;
}