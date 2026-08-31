#include <bits/stdc++.h>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::max;
    using std::min;
    using std::string;
    using std::unordered_map;
    using std::vector;

    int t;
    cin >> t;

    while (t--)
    {
        int n, maxi = INT_MIN;
        cin >> n;

        unordered_map<int, int> hash;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            hash[nums[i]]++;
            maxi = max(maxi, nums[i]);
        }

        cout << hash[maxi] << endl;
    }
    return 0;
}