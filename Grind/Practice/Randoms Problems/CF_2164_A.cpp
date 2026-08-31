#include <bits/stdc++.h>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;
    using std::vector;
    using std::min;
    using std::max;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mini = INT_MAX, maxi = INT_MIN;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }

        int x;
        cin >> x;

        if (x <= maxi && x >= mini)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}