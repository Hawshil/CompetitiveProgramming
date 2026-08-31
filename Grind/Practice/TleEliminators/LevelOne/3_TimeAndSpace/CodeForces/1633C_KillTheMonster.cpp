#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

constexpr bool canWin(ll hc, ll dc, ll hm, ll dm)
{
    return ((hc + dm - 1) / dm) >= ((hm + dc - 1) / dc);
}

void solve()
{
    ll hc, dc;
    cin >> hc >> dc;

    ll hm, dm;
    cin >> hm >> dm;

    ll k, w, a;
    cin >> k >> w >> a;

    bool canBeat = false;
    for (ll h = 0, d = k; h <= k; h++, d--)
    {
        if (canWin(hc + (h * a), dc + (d * w), hm, dm))
        {
            canBeat = true;
            break;
        }
    }

    if (canBeat)
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