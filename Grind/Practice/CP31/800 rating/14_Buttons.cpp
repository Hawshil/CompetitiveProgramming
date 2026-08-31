#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (c % 2 != 0)
    {
        a++;
    }

    if (a > b)
    {
        cout << "First" << el;
    }
    else
    {
        cout << "Second" << el;
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