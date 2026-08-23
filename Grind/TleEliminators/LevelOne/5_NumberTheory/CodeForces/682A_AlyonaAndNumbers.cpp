#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, m;
    cin >> n >> m;

    const ll init1 = n / 5, init2 = m / 5;
    array<ll, 5> a, b;
    a.fill(init1);
    b.fill(init2);

    for (int i = 1; i <= (n % 5); i++)
    {
        a[i]++;
    }

    for (int i = 1; i <= (m % 5); i++)
    {
        b[i]++;
    }

    ll pairs = (a[0] * b[0]) + (a[1] * b[4]) + (a[2] * b[3]) + (a[3] * b[2]) + (a[4] * b[1]);
    cout << pairs << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}