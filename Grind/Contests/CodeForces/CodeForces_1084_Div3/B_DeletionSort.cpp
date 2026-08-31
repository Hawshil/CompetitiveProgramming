#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;
using std::unordered_map;
using std::vector;

bool isSorted(vector<int> &nums, int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] < nums[i])
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
        int n, minfreq = 1;
        cin >> n;

        vector<int> nums(n);
        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            hash[nums[i]]++;
            minfreq = min(minfreq, hash[nums[i]]);
        }

        if (isSorted(nums, n))
        {
            cout << n << endl;
        }
        else
        {
            cout << minfreq << endl;
        }
    }
    return 0;
}