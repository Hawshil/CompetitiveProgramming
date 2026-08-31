#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::stack;
using std::string;
using std::unordered_map;
using std::vector;

bool AksLolCodingWins(string &s, int &n)
{
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            continue;
        }
        else if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    return st.empty();
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (AksLolCodingWins(s, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}