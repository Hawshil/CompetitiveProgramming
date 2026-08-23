#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool ansExists(ll x, ll k)
{
    ll factors = 0;

    for (ll f = 2; f * f <= x; f++)
    {
        while ((x % f) == 0)
        {
            x /= f;
            factors++;
        }
    }
    if (x > 1)
    {
        factors++;
    }

    return factors >= k;
}

void solve()
{
    ll x, k;
    cin >> x >> k;

    if (ansExists(x, k))
    {
        cout << 1 << el;
    }
    else
    {
        cout << 0 << el;
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