#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.rbegin(), nums.rend());
    ll maxWater = 0LL;

    for (int i = 0; i < n && i <= k; i++)
    {
        maxWater += nums[i];
    }

    cout << maxWater << el;
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