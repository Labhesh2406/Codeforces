#include <bits/stdc++.h>
typedef long long ll;
#define fs(lcv, hi) for(int lcv = 0; lcv < hi; lcv ++)
#define fb(lcv, hi) for(int lcv = hi; lcv >= 0; lcv --)
using namespace std;

void tests() {
	ll n;
	cin >> n;
	vector<vector<ll>> v(n, vector<ll>(2, 0));
	fs(i, n) {
		{	fs(j, 2)
			cin >> v[i][j];
		}
	}
	ll l = 0, r = INT_MAX;
	unordered_map<ll, ll>mp;

	fs(i,n){
		if (v[i][0] == 1) {
			l = max(l, v[i][1]);
		}
		else if (v[i][0] == 2) {
			r = min(r, v[i][1]);
		}
		else {
			mp[v[i][1]]++;
		}
	}
	ll count = 0;
	for (auto i : mp) {
		if (i.first >= l && i.first <= r) {
			count++;
		}
	}

	ll ans = r - l + 1 - count;
	if (r < l || ans < 0)
	{
		cout << 0 << endl;
		return;
	}
	cout << ans << endl;
}

int main(int argc, char const *argv[])
{

	int t;
	cin >> t;

	while (t--) {
		tests();
	}

	return 0;
}