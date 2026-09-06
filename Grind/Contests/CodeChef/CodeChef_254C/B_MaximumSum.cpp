#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

ll summer(vector<ll> &nums, ll n, ll k, ll i, ll j, vector<vector<vector<ll>>> &dp)
{
    if (k == 0)
    {
        ll sum = accumulate(nums.begin() + i, nums.begin() + j + 1, 0LL);
        return sum;
    }
    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return nums[i];
    }

    if (dp[i][j][k] != -1)
    {
        return dp[i][j][k];
    }

    ll left = summer(nums, n, k - 1, i + 1, j, dp);
    ll right = summer(nums, n, k - 1, i, j - 1, dp);

    return dp[i][j][k] = max(left, right);
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // 8165

    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(n, vector<ll>(k + 1, -1)));

    ll i = 0, j = n - 1;
    ll sum = summer(nums, n, k, i, j, dp);

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