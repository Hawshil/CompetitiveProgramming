#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;

    ll rem = n % x;
    ll required = n - rem + y;
    if (rem < y)
    {
        required -= x;
    }

    cout << required << el;
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