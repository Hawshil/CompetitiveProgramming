#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    string number = "";
    cin >> number;

    int n = number.size();

    // single digit numbers
    for (int i = 0; i < n; i++)
    {
        if ((number[i] - '0') % 8 == 0)
        {
            cout << "YES" << el;
            cout << number[i] << el;
            return;
        }
    }

    // double digits
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int twodig = ((number[i] - '0') * 10) + (number[j] - '0');
            if (twodig % 8 == 0)
            {
                cout << "YES" << el;
                cout << twodig << el;
                return;
            }
        }
    }

    // triple digits
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int threedig = ((number[i] - '0') * 100) + ((number[j] - '0') * 10) + (number[k] - '0');
                if (threedig % 8 == 0)
                {
                    cout << "YES" << el;
                    cout << threedig << el;
                    return;
                }
            }
        }
    }

    cout << "NO" << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}