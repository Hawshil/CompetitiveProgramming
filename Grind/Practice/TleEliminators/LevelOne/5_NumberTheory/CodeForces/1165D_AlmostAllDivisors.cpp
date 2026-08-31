#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> divisors(n);
    ll maxFactor = 1, minFactor = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        cin >> divisors[i];
        maxFactor = max(maxFactor, divisors[i]);
        minFactor = min(minFactor, divisors[i]);
    }

    ll number = maxFactor * minFactor;

    vector<ll> factors;
    for (ll factor = 2; factor * factor <= number; factor++)
    {
        if ((number % factor) == 0)
        {
            factors.push_back(factor);

            if ((factor * factor) != number)
            {
                factors.push_back(number / factor);
            }
        }
    }

    bool isValid = true;
    if (factors.size() != n)
    {
        isValid = false;
    }
    else
    {
        sort(factors.begin(), factors.end());
        sort(divisors.begin(), divisors.end());

        for (size_t i = 0; i < n; i++)
        {
            if (factors[i] != divisors[i])
            {
                isValid = false;
                break;
            }
        }
    }

    if (isValid)
    {
        cout << number << el;
    }
    else
    {
        cout << -1 << el;
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