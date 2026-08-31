#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    string initial, current;
    cin >> initial;
    current = initial;

    string previous = current;

    for (int i = 1; i < 2 * n; i++) {
        if (previous[i - 1] == '1') {
            if (previous[i] == '0') {
                current[i] = '1';
                current[i - 1] = '0';
            }
        }
    }

    if (previous[(2 * n) - 1] == '1') {
        if (previous[0] == '0') {
            current[0] = '1';
            current[(2 * n) - 1] = '0';
        }
    }

    int red = 0, blue = 0;
    for (int i = 1; i < 2 * n; i += 2) {
        if (current[i] == '1') {
            red++;
        }
    }

    for (int i = 0; i < 2 * n; i += 2) {
        if (current[i] == '1') {
            blue++;
        }
    }

    cout << red << " " << blue << el;
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