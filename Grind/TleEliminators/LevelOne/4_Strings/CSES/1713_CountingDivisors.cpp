#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<ll> divisors(1000001, 0);
    for (int i = 1; i <= 1000000; i++)
    {
        for (int j = i; j <= 1000000; j += i)
        {
            divisors[j]++;
        }
    }

    while (t--)
    {
        ll n;
        cin >> n;

        cout << divisors[n] << el;
    }

    return 0;
}