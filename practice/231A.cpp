#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int P, V, T;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> P >> V >> T;
		if ((P == 1 && V == 1 && T == 1) || (P == 0 && V == 1 && T == 1) || (P == 1 && V == 1 && T == 0) || (P == 1 && V == 0 && T == 1)) {
			count = count + 1;
		}
	}
	cout << count;
	return 0;
}