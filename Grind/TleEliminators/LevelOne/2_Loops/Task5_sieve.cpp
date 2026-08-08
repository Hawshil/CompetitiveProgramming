#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    int n;
    cin >> n;

    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= n; i++) {
        for (int j = i * i; j <= n; j += i) {
            sieve[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (sieve[i] == true) {
            cout << i << " ";
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}