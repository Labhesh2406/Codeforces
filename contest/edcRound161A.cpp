#include <bits/stdc++.h>
#define fs(lcv, hi) for(int lcv = 0; lcv < hi; lcv ++)
#define fb(lcv, hi) for(int lcv = hi; lcv >= 0; lcv --)
using namespace std;

void solve()
{
	int n;
	cin >> n;
	string a, b, c;
	cin >> a >> b >> c;

	int count = 0;
	string str = "";

	fs(i, n)
	{
		if (a[i] == b[i])
			str += a[i];
		else
			str += toupper(c[i]);
	}
	cout << str << endl;
	fs(i, n)
	{
		if (str[i] >= 'a' && str[i] <= 'z') {

		}
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}