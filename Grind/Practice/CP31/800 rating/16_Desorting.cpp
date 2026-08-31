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

    int minGap = INT_MAX;
    for (ll i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] - nums[i] < minGap)
        {
            minGap = nums[i + 1] - nums[i];
        }
    
        if(minGap < 0){
            cout << 0 << el;
            return;
        }
    }

    cout << (minGap + 2) / 2 << el;
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