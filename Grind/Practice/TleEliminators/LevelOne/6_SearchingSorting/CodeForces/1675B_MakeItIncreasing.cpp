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

    ll count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            for (int j = i; j > 0; j--)
            {
                while (nums[j] <= nums[j - 1])
                {
                    if (nums[j] == 0)
                    {
                        cout << -1 << el;
                        return;
                    }

                    nums[j - 1] >>= 1;
                    count++;
                }
            }
        }
    }

    cout << count << el;
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