#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    ll moves = 0;
    while (n != 1)
    {
        if ((n % 6) == 0)
        {
            n /= 6;
            moves++;
        }
        else
        {
            if ((n % 3) == 0)
            {
                n *= 2;
                moves++;
            }
            else
            {
                cout << -1 << el;
                return;
            }
        }
    }

    cout << moves << el;
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