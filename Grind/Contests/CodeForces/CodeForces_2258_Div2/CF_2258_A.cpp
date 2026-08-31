#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
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

    ll g = gcd(nums[0], nums[n - 1]), maxi = g;
    for (ll i = 1; i < n - 1; i++)
    {
        maxi = max(maxi, gcd(g, nums[i]));
    }

    cout << maxi << el;
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