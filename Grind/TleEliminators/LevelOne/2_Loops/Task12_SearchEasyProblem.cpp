#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    int n;
    cin >> n;

    bool difficult = false;

    for (int i = 0; i < n; i++) {
        int difficulty;
        cin >> difficulty;

        if (difficulty == 1) {
            difficult = true;
        }
    }

    if (difficult) {
        cout << "HARD" << el;
    } else {
        cout << "EASY" << el;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}