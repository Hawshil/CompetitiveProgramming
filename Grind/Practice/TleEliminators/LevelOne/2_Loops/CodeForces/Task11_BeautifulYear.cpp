#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool isDistinct(int year) {
    unordered_set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        year /= 10;

        if (digits.count(digit)) {
            return false;
        } else {
            digits.insert(digit);
        }
    }

    return true;
}

int solve() {
    int n;
    cin >> n;

    for (int i = n + 1; i <= 10000; i++) {
        if (isDistinct(i)) {
            return i;
        }
    }

    return n;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << solve();

    return 0;
}