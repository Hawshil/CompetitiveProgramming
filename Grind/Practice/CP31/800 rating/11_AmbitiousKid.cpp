#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int> &arr, const int &n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, abs(arr[i]));
    }

    return mini;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = solve(arr, n);
    cout << ans << endl;
    return 0;
}