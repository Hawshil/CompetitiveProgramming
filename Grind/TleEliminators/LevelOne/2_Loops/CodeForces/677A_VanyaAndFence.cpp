#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    ll n, fenceHeight;
    cin >> n >> fenceHeight;

    ll width = 0;

    vector<ll> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];

        if (heights[i] <= fenceHeight) {
            width++;
        } else {
            width += 2;
        }
    }

    cout << width << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}