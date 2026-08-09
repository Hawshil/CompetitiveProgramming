#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    vector<int> nums(3);
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int range = nums[2] - nums[0], minRange = range;

    do {
        nums[2] = nums[1] + nums[0];
        sort(nums.begin(), nums.end());
        range = nums[2] - nums[0];
        minRange = min(minRange, range);
    } while (nums[2] != nums[1] + nums[0]);

    cout << minRange << el;
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