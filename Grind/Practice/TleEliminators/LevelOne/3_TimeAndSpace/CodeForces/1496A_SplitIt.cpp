#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isPalindrome(const string &s, ll n, ll k)
{
    for (ll i = 0, j = n - 1; i < k; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (((2 * k) + 1) > n)
    {
        cout << "NO" << el;
    }
    else
    {
        if (isPalindrome(s, n, k))
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
        }
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