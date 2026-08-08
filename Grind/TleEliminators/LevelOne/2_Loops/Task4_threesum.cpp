#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    int k, s;
    cin >> k >> s;

    int count = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - (x + y);
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    cout << count << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}