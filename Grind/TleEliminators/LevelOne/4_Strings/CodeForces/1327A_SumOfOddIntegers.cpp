#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    if ((((n - k) % 2) == 0) && (n >= (k * k)))
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