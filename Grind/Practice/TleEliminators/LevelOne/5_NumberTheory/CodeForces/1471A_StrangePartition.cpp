#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

// monotonicity pattern
void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> nums(n, 0);
    ll maximalBeauty = 0, minimalBeauty = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        maximalBeauty += ((nums[i] + x - 1) / x);
        sum += nums[i];
    }

    minimalBeauty = ((sum + x - 1) / x);

    cout << minimalBeauty << " " << maximalBeauty << el;
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