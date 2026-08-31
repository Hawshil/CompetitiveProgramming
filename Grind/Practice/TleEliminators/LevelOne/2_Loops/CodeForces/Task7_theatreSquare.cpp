#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    ll n, m, a;
    cin >> n >> m >> a;

    ll A = ceil(n / (double)a);
    ll B = ceil(m / (double)a);

    cout << A * B << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}