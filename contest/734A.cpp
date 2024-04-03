#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int danilScore = 0;
	int antonScore = 0;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'D') {
			danilScore += 1;
		}
		else {
			antonScore += 1;
		}
	}
	if (antonScore > danilScore) {
		cout << "Anton" << endl;;
	}
	else if (danilScore > antonScore) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}
	return 0;
}