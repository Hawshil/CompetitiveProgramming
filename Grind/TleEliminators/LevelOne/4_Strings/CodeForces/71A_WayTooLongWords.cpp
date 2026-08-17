#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s;
    cin >> s;

    if (s.size() <= 10)
    {
        cout << s << el;
    }
    else
    {
        cout << s[0] << s.size() - 2 << s.back() << el;
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