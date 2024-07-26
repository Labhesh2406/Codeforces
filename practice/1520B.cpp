#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll t;
	cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll ans = 0;
		for (int i = 1; i <= 9; ++i)
		{
			ll num = 0;
			for (int j = 1; j <= 10; ++j)
			{
				num = num * 10 + i;
				if (num <= n)
				{
					++ans;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}