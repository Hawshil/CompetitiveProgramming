#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isNearlyLucky(ll n) {
    int luckyCount = 0;
    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
    }

    return ((luckyCount == 4) || (luckyCount == 7));
}

void solve() {
    ll n;
    cin >> n;

    if (isNearlyLucky(n)) {
        cout << "YES" << el;
    } else {
        cout << "NO" << el;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}