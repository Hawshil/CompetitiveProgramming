#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

ll solve() {
    int n;
    cin >> n;

    vector<ll> nums(n, 0);
    ll even = 0LL, odd = 0LL;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if ((nums[i] % 2) == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if ((n % 2) != 0) {
        return -1LL;
    } else {
        return ((llabs(even - odd)) / 2);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cout << solve() << el;
    }

    return 0;
}