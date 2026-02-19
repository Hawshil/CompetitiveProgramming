#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxi = 1, mini = 1;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }

        if (nums[0] != 1 || maxi > n || mini < 1)   
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}