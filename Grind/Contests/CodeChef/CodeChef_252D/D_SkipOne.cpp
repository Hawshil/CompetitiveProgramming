#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    ll spend = 0, index = -1, maxSpend = -1;
    for (size_t i = 0; i < n; i++)
    {
        maxSpend = max(maxSpend, nums[i]);
        if (spend + nums[i] <= k)
        {
            spend += nums[i];
        }
        else
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << n << el;
        return;
    }

    size_t bundex = index;

    if ((maxSpend == -1) || (maxSpend == nums[index]))
    {
        for (size_t i = bundex + 1; i < n; i++)
        {
            if (spend + nums[i] <= k)
            {
                spend += nums[i];
            }
            else
            {
                bundex = i;
                break;
            }
        }
    }
    else
    {
        spend -= maxSpend;
        for (size_t i = bundex; i < n; i++)
        {
            if (spend + nums[i] <= k)
            {
                spend += nums[i];
            }
            else
            {
                bundex = i;
                break;
            }
        }
    }

    if (index == bundex)
    {
        cout << n << el;
    }
    else
    {
        cout << bundex << el;
    }
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