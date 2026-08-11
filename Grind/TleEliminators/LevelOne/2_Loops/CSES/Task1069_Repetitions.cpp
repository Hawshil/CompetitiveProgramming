#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    string s;
    cin >> s;

    ll n = s.size();

    ll reps = 1, maxReps = 1;

    for (int i = 0; i < n; i++) {
        int j = i;
        for (; j < n - 1; j++) {
            if (s[j] == s[j + 1]) {
                reps++;
            } else {
                maxReps = max(reps, maxReps);
                reps = 1;
                i = j;
                break;
            }
        }
        i = j;
    }

    maxReps = max(reps, maxReps);
    cout << maxReps << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}