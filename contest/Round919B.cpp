#include <bits/stdc++.h>
typedef long long ll;
#define fs(lcv, hi) for(int lcv = 0; lcv < hi; lcv ++)
#define fb(lcv, hi) for(int lcv = hi; lcv >= 0; lcv --)
using namespace std;


void Tests()
{
	ll n , k , x;
	cin >> n >> k >> x;
	vector<ll> v(n);
	fs(i, n) cin >> v[i];

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	if (x > k) {
		ll ans = 0, temp = x;
		for (int i = k; i < n; i++)
		{
			if (temp) {
				v[i] = -1 * v[i];
				temp--;
			}
			ans += v[i];
		}
		cout << ans << endl;
		return;
	}

	ll xsum = 0;
	for (int i = 0; i < x; i++) {
		xsum += v[i];
	}

	ll sum = 0, ans = 0, j = 0;
	sum = accumulate(v.begin(), v.end(), sum) - xsum;

	ans = sum - xsum;
	for (int i = x; i < n; i++) {
		sum -= v[i];
		xsum += v[i];
		xsum -= v[j++] ;
		ans = max(ans, sum - xsum);
	}
	if (k == n) {
		ans = max(ans, (long long int)0);
	}
	cout << ans << endl;
}
int main(int argc, char const * argv[])
{
	int t;
	cin >> t;

	while (t--) {
		Tests();
	}
	return 0;
}