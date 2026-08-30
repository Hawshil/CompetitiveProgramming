#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> nums(n, 0);
    vector<ll> count(m + 2, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        count[nums[i]]++;
    }

    vector<ll> suffix(m + 3, 0);
    for (ll i = m; i >= 1; i--)
    {
        suffix[i] = suffix[i + 1] + count[i];
    }

    ll maxCarrots = 0;
    for (ll x = m; x >= 1; x--)
    {
        ll carrots = suffix[x];
        if (2 * x <= m)
        {
            carrots += count[2 * x];
        }
        maxCarrots = max(maxCarrots, carrots);
    }

    cout << maxCarrots << el;
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