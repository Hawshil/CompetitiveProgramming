#include <bits/stdc++.h>
using namespace std;

int mexcalc(vector<int> &nums, int &n)
{
    set<int> setty(nums.begin(), nums.end());
    nums.assign(setty.begin(), setty.end());

    int size = nums.size();
    if (size == 0)
    {
        return 0;
    }

    int length = 1, maxLength = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (nums[i + 1] - nums[i] == 1)
        {
            length++;
        }
        else
        {
            length = 1;
        }
        maxLength = max(length, maxLength);
    }

    return maxLength;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int mex = mexcalc(nums, n);
        cout << mex << endl;
    }

    return 0;
}
