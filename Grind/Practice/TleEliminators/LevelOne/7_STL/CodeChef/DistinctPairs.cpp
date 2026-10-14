#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll Amin = 0, Bmax = 0;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[Amin])
        {
            Amin = i;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] > b[Bmax])
        {
            Bmax = i;
        }
    }

    for (ll i = 0; i < m; i++)
    {
        cout << Amin << " " << i << el;
    }
    for (ll i = 0; i < n; i++)
    {
        if (i != Amin)
        {
            cout << i << " " << Bmax << el;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}