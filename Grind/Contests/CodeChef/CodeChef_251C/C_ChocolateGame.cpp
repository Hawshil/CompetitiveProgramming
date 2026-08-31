#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0LL, alice = 0LL;
    vector<ll> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    while (sum > 0)
    {
        auto maxi = max_element(nums.begin(), nums.end());

        if ((sum % 2) == 0) // alice turn
        {
            if ((*maxi) == 1)
            {
                alice = alice + (*maxi);
                sum = sum - (*maxi);
                (*maxi) = 0;
            }
            else if (((sum - (*maxi)) % 2) == 0)
            {
                alice = alice + (*maxi);
                sum = sum - (*maxi);
                (*maxi) = 0;
            }
            else
            {
                alice = alice - 1 + (*maxi);
                sum = sum + 1 - (*maxi);
                (*maxi) = 1;
            }
        }
        else // bob turn
        {
            if ((*maxi) == 1)
            {
                sum = sum - (*maxi);
                (*maxi) = 0;
            }
            else if (((sum - (*maxi)) % 2) == 0)
            {
                sum = sum + 1 - (*maxi);
                (*maxi) = 1;
            }
            else
            {
                sum = sum - (*maxi);
                (*maxi) = 0;
            }
        }
    }

    cout << alice << el;
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