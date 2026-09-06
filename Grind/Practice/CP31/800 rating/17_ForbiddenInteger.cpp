#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    // sum = n, digits from 1 to k except x

    if (x == 1)
    {
        if (n % 2 == 0)
        {
            if (k >= 2)
            {
                cout << "YES" << el;
                cout << n / 2 << el;
                for (ll i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << el;
            }
            else
            {
                cout << "NO" << el;
            }
        }
        else
        {
            if (n == 1)
            {
                cout << "NO" << el;
            }
            else
            {
                if (k >= 3)
                {
                    cout << "YES" << el;

                    ll limit = (n - 3);
                    cout << 1 + (limit / 2) << el;

                    for (ll i = 1; i <= limit / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << el;
                }
                else
                {
                    cout << "NO" << el;
                }
            }
        }
    }
    else
    {
        cout << "YES" << el;
        cout << n << el;
        for (ll i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << el;
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