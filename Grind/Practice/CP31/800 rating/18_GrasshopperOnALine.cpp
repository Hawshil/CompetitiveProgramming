#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll x, k;
    cin >> x >> k;

    x = abs(x);

    if (x <= 1)
    {
        cout << 1 << el << x << el;
    }
    else
    {
        if (x % k != 0)
        {
            cout << 1 << el << x << el;
        }
        else
        {
            int i = 1;
            while (((x - i) % k == 0) || ((i % k) == 0))
            {
                i++;
            }
            cout << 2 << el << x - i << " " << i << el;
        }
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