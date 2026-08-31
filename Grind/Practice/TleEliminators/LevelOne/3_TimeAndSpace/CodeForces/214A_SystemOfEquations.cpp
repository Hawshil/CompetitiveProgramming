#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll roots(ll n, ll m)
{
    if (n == 1 && m == 1)
    {
        return 2;
    }

    if (n >= m)
    {
        ll a = sqrtl(n);
        ll b = n - (a * a);

        if ((a + b * b) == m)
        {
            return 1;
        }
    }
    else
    {
        ll b = sqrtl(m);
        ll a = m - (b * b);

        if ((a * a + b) == n)
        {
            return 1;
        }
    }

    return 0;
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    cout << roots(n, m) << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}