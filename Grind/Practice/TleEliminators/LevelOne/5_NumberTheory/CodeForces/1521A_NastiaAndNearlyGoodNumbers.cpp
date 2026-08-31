#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (b == 1)
    {
        cout << "NO" << el;
    }
    else
    {
        cout << "YES" << el;
        cout << a * b << " " << a << " " << a * b + a << el;
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