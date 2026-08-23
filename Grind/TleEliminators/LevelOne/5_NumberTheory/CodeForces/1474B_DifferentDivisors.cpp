#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isPrime(ll num)
{
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    ll d;
    cin >> d;

    ll p1 = 1, p2 = 1;
    for (p1 = d + 1; p1 <= d + 10001; p1++)
    {
        if (isPrime(p1))
        {
            break;
        }
    }
    for (p2 = d + p1; p2 <= p1 + d + 10001; p2++)
    {
        if (isPrime(p2))
        {
            break;
        }
    }

    cout << p1 * p2 << el;
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