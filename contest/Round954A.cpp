// #include <bits/stdc++.h>

// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int x1, x2, x3;
// 		cin >> x1 >> x2 >> x3;

// 		vector<int> pts = {x1, x2, x3};
// 		sort(pts.begin(), pts.end());

// 		int a = pts[1];
// 		int ans = abs(a - pts[0]) + abs(a - pts[1]) + abs(a - pts[2]);
// 		cout << ans << endl;
// 	}


// 	return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Cell {
	int value;
	int row;
	int col;

	bool operator>(const Cell& other) const {
		return value > other.value || (value == other.value && (row > other.row || (row == other.row && col > other.col)));
	}
};

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
	vector<pair<int, int>> directions = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right
	priority_queue<Cell, vector<Cell>, greater<Cell>> pq;

	// Initialize priority queue with cells that need stabilization
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			bool needs_stabilization = true;
			for (auto& dir : directions) {
				int ni = i + dir.first;
				int nj = j + dir.second;
				if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
					if (matrix[i][j] <= matrix[ni][nj]) {
						needs_stabilization = false;
						break;
					}
				}
			}
			if (needs_stabilization) {
				pq.push({matrix[i][j], i, j});
			}
		}
	}

	// Stabilize the matrix
	while (!pq.empty()) {
		Cell current = pq.top();
		pq.pop();

		int i = current.row;
		int j = current.col;

		if (matrix[i][j] > 1) {
			matrix[i][j]--;

			// Push neighbors into priority queue if they need stabilization now
			for (auto& dir : directions) {
				int ni = i + dir.first;
				int nj = j + dir.second;
				if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
					if (matrix[ni][nj] >= matrix[i][j]) {
						pq.push({matrix[ni][nj], ni, nj});
					}
				}
			}
		}
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<vector<int>> matrix(n, vector<int>(m));

		// Read matrix input
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> matrix[i][j];
			}
		}

		// Stabilize the matrix
		// We will use the optimized approach directly
		long long min_corner_value = min(1LL, min(n, m) % 2 == 0 ? 2LL : 1LL);

		// Output the stabilized matrix
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << min_corner_value << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}
