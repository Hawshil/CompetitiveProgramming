#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll query(ll i)
{
    ll val;
    cout << "? " << i << endl;
    cin >> val;
    return val;
}

signed main()
{
    ll n;
    cin >> n;

    ll start = 1, end = n;
    ll mid = start + ((end - start) / 2);

    while (start < end)
    {
        ll val = query(mid);
        ll val2 = query(mid + 1);

        if (val <= val2)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }

    cout << "! " << start << endl;

    return 0;
}