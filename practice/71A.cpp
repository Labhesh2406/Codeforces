#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s.length() > 10) {
			int count = s.length() - 2;
			cout << s[0] << count << s[count + 1] << endl;
		}
		else {
			cout << s << endl;
		}
	}
}