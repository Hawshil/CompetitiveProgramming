#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n);
    int index = -1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (nums[0] != nums[1] && nums[1] == nums[2])
    {
        index = 0;
    }
    else if (nums[n - 2] == nums[n - 3] && nums[n - 1] != nums[n - 2])
    {
        index = n - 1;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
            {
                index = i;
                break;
            }
        }
    }

    cout << index + 1 << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}