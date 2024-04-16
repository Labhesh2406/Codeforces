#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long> arr(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == arr[i - 1])
                cnt++;
        }
        if (cnt >= 1)
            cout << cnt << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
