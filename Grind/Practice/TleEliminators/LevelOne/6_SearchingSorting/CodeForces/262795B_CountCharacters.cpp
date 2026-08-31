#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s;
    cin >> s;

    vector<ll> caps(26, 0), smalls(26, 0);
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            smalls[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            caps[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (caps[i] > 0)
        {
            cout << char(i + 'A') << " " << caps[i] << el;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (smalls[i] > 0)
        {
            cout << char(i + 'a') << " " << smalls[i] << el;
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