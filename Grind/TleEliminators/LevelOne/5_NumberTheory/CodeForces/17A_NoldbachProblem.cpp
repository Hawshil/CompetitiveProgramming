#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define el '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<bool> primes(n + 1, true);
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

    ll count = 0;
    size_t prev = 2;
    bool isNoldback = (k == 0);
    for (size_t i = 3; i <= n; i++)
    {
        if (primes[i])
        {
            size_t candidate = i + prev + 1;

            if (candidate <= n && primes[candidate])
            {
                count++;
            }

            prev = i;
        }

        if (count >= k)
        {
            isNoldback = true;
            break;
        }
    }

    if (isNoldback)
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

    solve();

    return 0;
}