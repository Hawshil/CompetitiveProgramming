#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll route = 1 + (a[n - 1] == b[n - 1]), ans = route;

    for (ll i = n - 2; i >= 0; i--)
    {
        route += 2 + (a[i] == b[i + 1]) + (a[i + 1] == b[i]);
        ans = max(ans, ans + 2 + (a[i] == b[i]) + (a[i + 1] == b[i]));
        ans = max(ans, route);
    }

    cout << ans << el;
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