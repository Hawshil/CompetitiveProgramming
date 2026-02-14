#include <bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int> &nums, const int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (is_sorted(nums, n))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}