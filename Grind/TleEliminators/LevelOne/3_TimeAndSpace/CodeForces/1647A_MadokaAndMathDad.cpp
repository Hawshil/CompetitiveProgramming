#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    ll n;
    cin >> n;

    ll sum = 0;
    string num = "";
    bool flag = true;
    while (sum < n) {
        if (flag) {
            sum += 2;
            num.push_back('2');
        } else {
            sum += 1;
            num.push_back('1');
        }
        flag = !flag;
    }

    if (sum != n) {
        sum = 0;
        num = "";
        flag = true;

        while (sum < n) {
            if (flag) {
                sum += 1;
                num.push_back('1');
            } else {
                sum += 2;
                num.push_back('2');
            }
            flag = !flag;
        }
    }

    cout << num << el;
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