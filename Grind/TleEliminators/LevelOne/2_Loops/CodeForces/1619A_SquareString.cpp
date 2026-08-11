#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    string s;
    cin >> s;

    ll n = s.size();

    bool isSquare = true;
    if ((n % 2) != 0) {
        isSquare = false;
    } else {
        for (int i = 0, j = n / 2; (i < (n / 2)) && (j < n); i++, j++) {
            if (s[i] != s[j]) {
                isSquare = false;
                break;
            }
        }
    }

    if (isSquare) {
        cout << "YES" << el;
    } else {
        cout << "NO" << el;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}