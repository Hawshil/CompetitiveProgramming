#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll x;
    cin >> x;

    ll max_a = 1, max_b = x;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (gcd(i, x / i) == 1)
            {
                if (max(i, x / i) < max(max_a, max_b))
                {
                    max_a = i;
                    max_b = x / i;
                }
            }
        }
    }

    cout << max_a << " " << max_b << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}