#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 998244353;
#define el '\n'

void backtrack(string &s, int n, long long &ways, int index) {
    if (index >= n) {
        ways++;
        return;
    }

    if (s[index] != '?') {
        if (index >= 2 && s[index] == s[index - 2]) {
            return;
        }

        backtrack(s, n, ways, index + 1);
        return;
    }

    if (index >= 2) {

        s[index] = (s[index - 2] == '0') ? '1' : '0';
        backtrack(s, n, ways, index + 1);
        s[index] = '?';

    } else {
        s[index] = '0';
        backtrack(s, n, ways, index + 1);

        s[index] = '1';

        backtrack(s, n, ways, index + 1);
        s[index] = '?';
    }
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ways = 0LL;
    backtrack(s, n, ways, 0);

    ways = ways % MOD;
    cout << ways << el;
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