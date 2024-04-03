#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;
	int countUp = 0;
	int countLow = 0;
	for (int i = 0; i < s.size(); i++) {
		if (isupper(s[i])) {
			countUp++;
		}
		else {
			countLow++;
		}
	}
	if (countUp > countLow)
	{
		string ch;
		for (int i = 0; i < s.size(); i++)
		{
			ch = toupper(s[i]);
			cout << ch;
		}
	}
	else {
		string ch;
		for (int i = 0; i < s.size(); i++) {
			ch = tolower(s[i]);
			cout << ch;
		}
	}
	return 0;
}