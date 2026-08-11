#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll firstwinner = max(a, b), firstloser = min(a, b);
    ll secondwinner = max(c, d), secondloser = min(c, d);

    if (firstwinner > secondloser && secondwinner > firstloser)
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
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