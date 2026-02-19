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
        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            hash[nums[i]]++;
        }

        if (hash.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if (hash.size() > 2)
        {
            cout << "No" << endl;
        }
        else
        {
            vector<int> v;
            v.reserve(2);
            for (const auto &p : hash)
            {
                v.emplace_back(p.second);
            }

            if (abs(v[1] - v[0]) > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}