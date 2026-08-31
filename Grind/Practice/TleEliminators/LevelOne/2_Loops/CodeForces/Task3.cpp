#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n, 0);
    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        }

        if ((arr[i] & 1) == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even: " << even << el;
    cout << "Odd: " << odd << el;
    cout << "Positive: " << pos << el;
    cout << "Negative: " << neg << el;

    return 0;
}