#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s, t;
    cin >> s;
    cin >> t;

    string m = s;
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == t[i])
        {
            m[i] = 'G';
        }
        else
        {
            m[i] = 'B';
        }
    }

    cout << m << el;
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