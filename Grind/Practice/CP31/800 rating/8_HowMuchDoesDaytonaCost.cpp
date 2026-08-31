#include <bits/stdc++.h>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;
    using std::vector;

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        bool hasK = false;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == k)
            {
                hasK = true;
            }
        }

        if (hasK)
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