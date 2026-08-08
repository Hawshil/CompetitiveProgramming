#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define eline '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    bool isPrime = true;
    for (int i = 2; i * i <= x; i++) {
        if ((x % i) == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "YES" << eline;
    } else {
        cout << "NO" << eline;
    }

    return 0;
}