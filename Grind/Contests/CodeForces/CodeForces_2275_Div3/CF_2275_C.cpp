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

    ll ways = 0LL;
    unordered_map<ll, ll> sumfreq;
    vector<ll> sums(n, 0);
    for (int i = 0; i < n - 4; i++)
    {
        sums[i] = nums[i] + nums[i + 2] - nums[i + 4];
    }

    for (int i = 0; i < n - 4; i++)
    {
        ways += sumfreq[sums[i]];
        sumfreq[sums[i]]++;
    }

    for (int i = 0; i < n - 6; i++)
    {
        if (sums[i] == sums[i + 2])
        {
            ways--;
        }
    }
    for (int i = 0; i < n - 8; i++)
    {
        if (sums[i] == sums[i + 4])
        {
            ways--;
        }
    }

    cout << ways << el;
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