#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isPerfectNumber(ll num)
{
    ll sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return (sum == 10);
}

void solve()
{
    ll k;
    cin >> k;

    ll perfectNumber = 10;

    while (k--)
    {
        ll i = perfectNumber + 9;

        while (!isPerfectNumber(i))
        {
            i += 9;
        }

        perfectNumber = i;
    }

    cout << perfectNumber << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}