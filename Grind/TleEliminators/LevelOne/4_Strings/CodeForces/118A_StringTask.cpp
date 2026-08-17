#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isConsonant(char c)
{
    string check = "aeiouyAEIOUY";
    for (size_t i = 0; i < check.size(); i++)
    {
        if (c == check[i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;

    string ans;
    for (const char &c : s)
    {
        if (isConsonant(c))
        {
            ans.push_back('.');
            ans.push_back(tolower(c));
        }
    }

    cout << ans << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}