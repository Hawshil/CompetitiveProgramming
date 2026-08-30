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
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    ll missing = -m;

    if (nums[0] != missing)
    {
        cout << missing << el;
        return;
    }
    else
    {
        missing++;
    }

    for (ll i = 1; i < n;)
    {
        while (nums[i] == nums[i - 1])
        {
            i++;
        }

        if (nums[i] == missing)
        {
            i++;
            missing++;
        }
        else
        {
            cout << missing << el;
            return;
        }
    }

    cout << missing << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}