#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string s;
    cin >> s;

    stack<char> st;
    for (const char &c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else if (st.top() == 'A')
        {
            if (c == 'A')
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
        else if (st.top() == 'B')
        {
            if (c == 'A')
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
    }

    cout << st.size() << el;
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