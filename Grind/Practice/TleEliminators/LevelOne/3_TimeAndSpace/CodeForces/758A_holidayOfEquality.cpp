#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    ll maxi = -1, sum = 0LL;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        maxi = maxi - ((maxi - arr[i]) & ((maxi - arr[i]) >> 63));
        sum += arr[i];
    }

    ll burles = (maxi * n) - sum;
    cout << burles << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}