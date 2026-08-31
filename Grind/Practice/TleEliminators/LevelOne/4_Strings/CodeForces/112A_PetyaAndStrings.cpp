#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

char getLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    else
    {
        return c - 'A' + 'a';
    }
}

void solve()
{
    string a, b;
    cin >> a;
    cin >> b;

    ll n = a.size(), m = b.size();
    ll i = 0, j = 0;

    while (i < n && j < m)
    {
        char first = getLowerCase(a[i]), second = getLowerCase(b[i]);
        if (first < second)
        {
            cout << -1 << el;
            return;
        }
        else if (first > second)
        {
            cout << 1 << el;
            return;
        }
        else
        {
            i++;
            j++;
        }
    }

    if (i < n)
    {
        cout << 1 << el;
    }
    else if (j < m)
    {
        cout << -1 << el;
    }
    else
    {
        cout << 0 << el;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}