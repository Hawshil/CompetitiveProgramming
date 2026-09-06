#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

ll ops(ll pos, ll neg)
{
    if (neg <= pos)
    {
        if (neg % 2 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        ll diff = neg - pos;
        ll operations = (diff + 1) / 2;

        if (neg % 2 == 0)
        {
            if (operations % 2 == 0)
            {
                return operations;
            }
            else
            {
                return operations + 1;
            }
        }
        else
        {
            if (operations % 2 == 0)
            {
                return operations + 1;
            }
            else
            {
                return operations;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n, 0);
    ll pos = 0, neg = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (nums[i] == 1)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    cout << ops(pos, neg) << el;
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