#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(2 * n, 0);
    for (size_t i = 0; i < 2 * n; i++)
    {
        cin >> nums[i];
    }

    ll sum = 0;
    for (size_t i = 0, j = (2 * n) - 1; i < n; i++, j--)
    {
        sum += max(nums[i], nums[j]);
    }

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