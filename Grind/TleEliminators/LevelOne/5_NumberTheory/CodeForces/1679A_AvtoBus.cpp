#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    if ((n % 2 != 0) || (n < 4))
    {
        cout << -1 << el;
    }
    else
    {
        cout << ((n + 5) / 6) << " " << (n / 4) << el;
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