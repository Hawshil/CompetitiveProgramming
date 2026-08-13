#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s;
    cin >> s;

    ll n = s.size(), index = -1;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            index = i + 1;
            break;
        }
    }

    if (index == -1)
    {
        cout << "YES" << el;
        return;
    }

    for (size_t i = index; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            cout << "NO" << el;
            return;
        }
    }

    cout << "YES" << el;
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