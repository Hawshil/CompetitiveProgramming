#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    unordered_map<char, ll> hash;
    unordered_set<char> singles;
    for (const char &c : s)
    {
        hash[c]++;
    }

    ll i = 0, j = n - 1;
    for (auto &[val, freq] : hash)
    {
        if ((freq % 2) == 0)
        {
            while (freq > 0)
            {
                s[i++] = val;
                s[j--] = val;
                freq -= 2;
            }
        }
        else
        {
            while (freq > 1)
            {
                s[i++] = val;
                s[j--] = val;
                freq -= 2;
            }
            singles.insert(val);
        }
    }

    if (singles.size() > 1)
    {
        cout << "NO SOLUTION" << el;
    }
    else
    {
        if (!singles.empty())
        {
            ll mid = n / 2;
            s[mid] = *singles.begin();
        }
        cout << s << el;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}