#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    bool primes[n + 1];
    fill(primes, primes + n + 1, true);
    primes[0] = primes[1] = false;
    for (size_t i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (size_t j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for (size_t i = 4; i <= n; i++)
    {
        if ((primes[i] == false) && (primes[n - i] == false))
        {
            cout << i << " " << (n - i) << el;
            break;
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