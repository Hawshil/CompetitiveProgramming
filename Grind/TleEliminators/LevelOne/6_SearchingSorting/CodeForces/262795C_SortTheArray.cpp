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
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}