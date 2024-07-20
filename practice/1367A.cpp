#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		string S; cin >> S;
		string A; A += S[0];
		for (int i = 1; i < int(S.size()); i += 2) {
			A += S[i];
		}
		cout << A << '\n';
	}
	return 0;
}