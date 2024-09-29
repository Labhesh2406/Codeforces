#include <bits/stdc++.h>
using namespace std;

string join(const vector<string>& vals, const string& sep) {
	string res;
	for (size_t i = 0; i < vals.size(); i++) {
		res += vals[i];
		if (i < vals.size() - 1) {
			res += sep;
		}
	}
	return res;
}

string solve(long long n, long long q, vector<long long>& pos, vector<long long>& queries) {
	unordered_map<long long, long long> freq;

	for (long long i = 1; i <= n; i++) {
		long long key = (i - 1) * (n - i + 1) + (n - i);
		freq[key]++;

		if (i < n) {
			long long gap = pos[i] - pos[i - 1] - 1;
			if (gap > 0) {
				long long between_key = i * (n - i);
				freq[between_key] += gap;
			}
		}
	}

	vector<string> results;
	for (long long query : queries) {
		results.push_back(to_string(freq[query]));
	}

	return join(results, " ");
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long t;
	cin >> t;
	vector<string> all_res;

	for (long long i = 0; i < t; i++) {
		long long n, q;
		cin >> n >> q;

		vector<long long> pos(n);
		for (long long j = 0; j < n; j++) {
			cin >> pos[j];
		}

		vector<long long> queries(q);
		for (long long j = 0; j < q; j++) {
			cin >> queries[j];
		}

		string res = solve(n, q, pos, queries);
		all_res.push_back(res);
	}

	cout << join(all_res, "\n") << endl;

	return 0;
}
