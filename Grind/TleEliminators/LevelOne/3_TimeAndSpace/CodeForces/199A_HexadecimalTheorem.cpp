#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    ll a = 0, b = 1;
    vector<ll> fibs;
    fibs.emplace_back(a);
    fibs.emplace_back(b);

    ll c = a + b;
    while (c < n)
    {
        c = a + b;
        fibs.emplace_back(c);
        a = b;
        b = c;
    }

    unordered_set<ll> setty;
    for (const auto &fib : fibs)
    {
        setty.insert(n - fib);
    }

    for (size_t i = 0; i < fibs.size(); i++)
    {
        for (size_t j = 0; j < fibs.size(); j++)
        {
            if (setty.count(fibs[i] + fibs[j]))
            {
                cout << fibs[i] << " " << fibs[j] << " " << n - (fibs[i] + fibs[j]) << el;
                return;
            }
        }
    }

    cout << "I'm too stupid to solve this problem" << el;
}

void solve2()
{
    ll n;
    cin >> n;

    cout << 0 << " " << 0 << " " << n << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve();
    solve2();

    return 0;
}