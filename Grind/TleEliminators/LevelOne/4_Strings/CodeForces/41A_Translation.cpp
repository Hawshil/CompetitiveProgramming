#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();

    bool isPalindrome = true;

    if (n != m)
    {
        isPalindrome = false;
    }
    else
    {
        for (size_t i = 0, j = n - 1; i < n; i++, j--)
        {
            if (s[i] != t[j])
            {
                isPalindrome = false;
                break;
            }
        }
    }

    if (isPalindrome)
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}