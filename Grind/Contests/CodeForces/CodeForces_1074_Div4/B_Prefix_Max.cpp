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

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int maxi = INT_MIN, index = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                index = i;
            }
        }
        swap(nums[0], nums[index]);

        cout << maxi * n << endl;
    }

    return 0;
}
