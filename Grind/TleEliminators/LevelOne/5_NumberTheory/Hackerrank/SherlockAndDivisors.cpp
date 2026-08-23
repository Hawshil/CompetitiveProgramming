#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, divisors = 0;
        cin >> n;

        for (size_t div = 2; div * div <= n; div += 2)
        {
            if (n % div == 0)
            {
                divisors++;
            }

            size_t div2 = (n / div);

            if ((div2 % 2 == 0) && (div2 * div2 != n))
            {
                if (n % div2 == 0)
                {
                    divisors++;
                }
            }
        }
        
        if (n % 2 == 0)
        {
            divisors++;
        }
        cout << divisors << el;
    }

    return 0;
}