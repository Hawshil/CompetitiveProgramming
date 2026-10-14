#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    if (n == 2)
    {
        cout << 0 << el;
    }
    else
    {
        cout << min((nums[n - 2] - nums[0]), (nums[n - 1] - nums[1])) << el;
    }
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