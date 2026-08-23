#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    for (ll c = 1; c < n; c++)
    {
        ll sum = n - c;
        for (ll a = 1; a < n; a++)
        {
            if ((a == c) || (sum - a == c) || (a + a == sum))
            {
                continue;
            }

            if (gcd(a, sum - a) == c)
            {
                cout << a << " " << sum - a << " " << c << el;
                return;
            }
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