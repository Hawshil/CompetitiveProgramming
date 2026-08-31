#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    size_t n;
    cin >> n;

    vector<ll> nums(n, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll sum = 0, maxi = LLONG_MIN;
    for (size_t i = 0; i < n;)
    {
        maxi = nums[i];
        while (i < n && nums[i] > 0)
        {
            maxi = max(maxi, nums[i++]);
        }
        if (maxi > 0)
        {
            sum += maxi;
        }

        if (i < n)
        {
            maxi = nums[i++];
            while (i < n && nums[i] < 0)
            {
                maxi = max(maxi, nums[i++]);
            }
            sum += maxi;
        }
    }

    cout << sum << el;
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