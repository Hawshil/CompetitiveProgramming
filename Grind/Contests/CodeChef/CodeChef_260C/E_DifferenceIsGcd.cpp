#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    ll count = 0LL, sq = 0;
    for (ll diff = 1; diff * diff <= n; diff++)
    {
        count += n / diff;
        sq = diff;
    }

    // double the count for root optimisation and double the divisors
    // sq * sq overlaps
    // n subtracted for x, y being distinct (no overlaps)
    count = (2 * count) - (sq * sq) - n;
    cout << count << el;
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