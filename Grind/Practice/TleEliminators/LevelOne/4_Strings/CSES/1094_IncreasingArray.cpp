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
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll maxi = nums[0], moves = 0;
    for (size_t i = 0; i < n; i++)
    {
        maxi = maxi - ((maxi - nums[i]) & ((maxi - nums[i]) >> 63));
        moves += maxi - nums[i];
    }

    cout << moves << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}