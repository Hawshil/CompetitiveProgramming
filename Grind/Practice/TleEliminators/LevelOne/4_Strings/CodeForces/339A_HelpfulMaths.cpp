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
    ll one = 0, two = 0, three = 0;

    for (size_t i = 0; i < n; i += 2)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else if (s[i] == '2')
        {
            two++;
        }
        else
        {
            three++;
        }
    }

    string newSum;
    while (one--)
    {
        newSum.push_back('1');
        newSum.push_back('+');
    }
    while (two--)
    {
        newSum.push_back('2');
        newSum.push_back('+');
    }
    while (three--)
    {
        newSum.push_back('3');
        newSum.push_back('+');
    }

    if (newSum.size() > 1)
    {
        newSum.pop_back();
    }

    cout << newSum << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}