#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	int a = 0;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			arr[i]--;
		}
		vector<bool> visited(n, false);
		int min_invite = 0;

		for (int i = 0; i < n; i++) {
			if (!visited[i]) {
				int current = i;
				int cnt = 0;
				while (!visited[current]) {
					visited[current] = true;
					current = arr[current];
					cnt = cnt + 1;
				}
				min_invite += max(0, cnt - 1);
			}
		}
		cout << min_invite << endl;
	}
	return 0;
}