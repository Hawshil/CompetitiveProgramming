#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll fib(int n) {
    ll a = 0, b = 1;

    for (int i = 1; i < n; i++) {
        ll c = a + b;
        a = b;
        b = c;
    }

    return a;
}

void solve() {
    int n;
    cin >> n;

    cout << fib(n) << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}