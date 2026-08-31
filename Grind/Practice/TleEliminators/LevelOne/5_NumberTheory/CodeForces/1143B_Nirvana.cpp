#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll power(ll a, ll n)
{
    if (n == 0)
    {
        return 1;
    }

    ll half_power = power(a, n / 2);

    if (n % 2 == 0)
    {
        return half_power * half_power;
    }
    else
    {
        return half_power * half_power * a;
    }
}

void solve()
{
    ll n;
    cin >> n;

    if (n < 10)
    {
        cout << n << el;
        return;
    }

    ll digits = floor(log10(n)) + 1, maxProd = 1;

    ll num = n;
    while (num > 0)
    { // number with no changes
        maxProd *= num % 10;
        num /= 10;
    }

    for (int i = 1; i < digits; i++)
    { // testing 9 digits products
        ll prod = 1, num = n;

        ll lastDigits = num % power(10, i);
        num = num - lastDigits - 1;

        while (num > 0)
        {
            prod *= (num % 10);
            num /= 10;
        }

        maxProd = max(maxProd, prod);
    }

    cout << maxProd << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}