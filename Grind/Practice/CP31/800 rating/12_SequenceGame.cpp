#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> b(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> a;
    a.emplace_back(b[0]);
    for (ll i = 1; i < n; i++)
    {
        a.emplace_back(b[i]);
        if (b[i] < b[i - 1])
        {
            a.emplace_back(b[i]);
        }
    }

    cout << a.size() << el;
    for (ll i : a)
    {
        cout << i << " ";
    }
    cout << el;
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