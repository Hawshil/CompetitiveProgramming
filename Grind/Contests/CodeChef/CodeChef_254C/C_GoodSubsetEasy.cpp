#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 998244353LL;
#define el '\n'

ll power(ll a, ll n)
{
    if (n == 0)
    {
        return 1;
    }

    ll half_power = power(a, n / 2);

    if (n % 2 == 0)
    {
        return ((half_power % MOD) * (half_power % MOD)) % MOD;
    }
    else
    {
        return ((((half_power % MOD) * (half_power % MOD)) % MOD) * (a % MOD)) % MOD;
    }
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll maxLength = 0;
    vector<ll> msbCount(32, 0);
    for (ll i = 0; i < n; i++)
    {
        maxLength = max(maxLength, ++msbCount[63 - __builtin_clzll(nums[i])]);
    }

    cout << maxLength << el;
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