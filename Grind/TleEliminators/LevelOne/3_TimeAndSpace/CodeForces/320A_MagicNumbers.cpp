#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string num;
    cin >> num;
    
    int state = 0;

    for (size_t i = 0; i < num.size(); i++)
    {
        if (state == 0)
        {
            if (num[i] == '1')
            {
                state = 1;
            }
            else
            {
                state = 4;
            }
        }
        else if (state == 1)
        {
            if (num[i] == '1')
            {
                state = 1;
            }
            else if (num[i] == '4')
            {
                state = 2;
            }
            else
            {
                state = 4;
            }
        }
        else if (state == 2)
        {
            if (num[i] == '1')
            {
                state = 1;
            }
            else if (num[i] == '4')
            {
                state = 3;
            }
            else
            {
                state = 4;
            }
        }
        else if (state == 3)
        {
            if (num[i] == '1')
            {
                state = 1;
            }
            else
            {
                state = 4;
            }
        }
        else
        {
            break;
        }
    }

    if (state == 4)
    {
        cout << "NO" << el;
    }
    else
    {
        cout << "YES" << el;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}