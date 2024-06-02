#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		long long int n ;
		cin >> n;
		vector<long long int> h(n);
		long long int ai, time = 0;
		for (int i = 0; i < n; i++) {
			cin >> ai;
			time += ai;
		}
		for (auto &i : h) {
			cin >> i;
			time += i;
		}
		time -= (*max_element(h.begin(), h.end()));
		cout << time << endl;
	}
	return 0;
}