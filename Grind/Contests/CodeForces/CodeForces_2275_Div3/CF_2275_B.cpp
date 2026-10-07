#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector<ll> unprinted, memory;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            memory.push_back(i + 1);
        }
        else if (s[i] == '2')
        {
            if (!memory.empty())
            {
                memory.pop_back();
                unprinted.push_back(i + 1);
            }
        }
    }

    vector<ll> merged;
    for (const auto i : unprinted)
    {
        merged.push_back(i);
    }
    for (const auto i : memory)
    {
        merged.push_back(i);
    }

    sort(merged.begin(), merged.end());
    cout << merged.size() << el;
    for (const auto i : merged)
    {
        cout << i << " ";
    }
    if (!merged.empty())
    {
        cout << el;
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