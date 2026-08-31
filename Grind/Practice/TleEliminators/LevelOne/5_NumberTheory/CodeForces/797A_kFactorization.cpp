#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll num = n;
    vector<ll> factors;
    for (ll f = 2; f * f <= num; f++)
    {
        while (num % f == 0)
        {
            factors.emplace_back(f);
            num /= f;
        }
    }
    if (num > 1)
    {
        factors.emplace_back(num);
    }

    if (factors.size() < k)
    {
        cout << -1 << el;
    }
    else
    {
        ll sz = factors.size();
        for (ll i = k; i < sz; i++)
        {
            factors[0] *= factors[i];
        }

        for (ll i = 0; i < k; i++)
        {
            cout << factors[i] << " ";
        }
        cout << el;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}