#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

bool isValid(ll mid, vector<vector<ll>> &labs, ll k, ll n)
{
    ll ops = 0;

    for (ll i = 0; i < n; i++)
    {
        ll sum = labs[i][0] + labs[i][1] + labs[i][2];
        if (sum >= mid)
        {
            continue;
        }

        if (labs[i][0] == labs[i][1] && labs[i][1] == labs[i][2])
        {
            if (sum < mid)
            {
                return false;
            }
        }
        else if (labs[i][0] <= labs[i][1] && labs[i][1] <= labs[i][2])
        {
            ll penalty = 2 * (max(0LL, min(labs[i][1] - labs[i][0], labs[i][2] - labs[i][1]) + 1));
            ops += penalty + mid - sum;
        }
        else if (labs[i][0] > labs[i][1] || labs[i][1] > labs[i][2])
        {
            ops += mid - sum;
        }
        else
        {
            cout << "mid: " << mid << " " << "i: " << i << el;
        }

        if (ops > k)
        {
            return false;
        }
    }

    return ops <= k;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> labs(n, vector<ll>(3));
    for (ll i = 0; i < n; i++)
    {
        cin >> labs[i][0] >> labs[i][1] >> labs[i][2];
    }

    ll end = 2000000000000000000LL, start = -2000000000000000000LL;
    ll mid = start + ((end - start) / 2);

    ll ans = start;
    while (start <= end)
    {
        if (isValid(mid, labs, k, n))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
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