#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> nums(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> nums[i];
        }

        int max_distance = 0;
        for (int i = 0; i < n; i++)
        {
            max_distance = max(max_distance, nums[i + 1] - nums[i]);
        }

        max_distance = max(max_distance, 2 * (x - nums[n]));

        cout << max_distance << endl;
    }
}