#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n, 0);
    ll maxi = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxi = maxi - ((maxi - nums[i]) & ((maxi - nums[i]) >> 63));
    }

    vector<ll> b, c;
    for (ll i = 0; i < n; i++)
    {
        if (nums[i] == maxi)
        {
            c.emplace_back(nums[i]);
        }
        else
        {
            b.emplace_back(nums[i]);
        }
    }

    if (c.empty() || b.empty())
    {
        cout << -1 << el;
        return;
    }

    cout << b.size() << " " << c.size() << el;
    for (ll i : b)
    {
        cout << i << " ";
    }
    cout << el;
    for (ll i : c)
    {
        cout << i << " ";
    }
    cout << el;
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