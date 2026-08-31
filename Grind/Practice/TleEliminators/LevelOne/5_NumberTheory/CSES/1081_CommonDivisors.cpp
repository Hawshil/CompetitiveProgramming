#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }

    return a;
}

void solve()
{
    ll n, maxi = 0;
    cin >> n;

    vector<ll> nums(n, 0);
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxi = max(maxi, nums[i]);
        freq[nums[i]]++;
    }

    for (ll i = maxi; i >= 1; i--)
    {
        ll multiples = 0;

        for (ll j = i; j <= maxi; j += i)
        {
            multiples += freq[j];

            if (multiples >= 2)
            {
                cout << i << el;
                return;
            }
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