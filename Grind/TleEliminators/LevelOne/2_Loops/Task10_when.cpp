#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    int k;
    cin >> k;

    string time = "21:00";
    if (k >= 60) {
        time[1] = '2';
        k -= 60;
    }
    if (k > 0) {
        time[4] = char((k % 10) + '0');
        k /= 10;
    }
    if (k > 0) {
        time[3] = char(k + '0');
    }

    cout << time << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}