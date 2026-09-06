#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n, total_diff = 0LL;
    cin >> n;

    vector<ll> nums(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> nums[i];

        if (i % 2 != 0)
        {
            nums[i] = -nums[i];
        }

        total_diff += llabs(nums[i] - nums[i - 1]);
    }

    total_diff += llabs(nums[n]);

    cout << total_diff / 2 << el;
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