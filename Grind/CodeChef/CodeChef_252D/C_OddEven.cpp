#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, odd = 0, even = 0;
    cin >> n;

    vector<ll> nums(n, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];

        if (nums[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (odd == even)
    {
        cout << odd * 2 << el;
    }
    else
    {
        cout << (min(odd, even) * 2) + 1 << el;
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