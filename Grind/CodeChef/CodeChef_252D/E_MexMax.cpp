#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 998244353;
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

    vector<ll> nums(n, 0), hash(102, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
        hash[nums[i]]++;
    }

    ll goods = 0, prefixWays = 1;
    for (size_t i = 0; i <= n; i++)
    {
        ll justMaxWays = (power(2, hash[i + 1]) - 1 + MOD) % MOD;
        ll beforeMaxCase = (prefixWays * justMaxWays) % MOD;

        goods = (goods + beforeMaxCase) % MOD;

        if (hash[i] == 0)
        {
            break;
        }

        ll currentPickWays = (power(2, hash[i]) - 1 + MOD) % MOD;
        prefixWays = (prefixWays * currentPickWays) % MOD;

        goods = (goods + prefixWays) % MOD;
    }

    cout << goods << el;
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