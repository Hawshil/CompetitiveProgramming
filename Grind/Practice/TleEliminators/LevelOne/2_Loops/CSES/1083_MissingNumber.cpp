#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve() {
    ll n;
    cin >> n;

    ll ExpectedSum = (n * (n + 1)) / 2;
    ll ActualSum = 0LL;

    ll input;
    for (int i = 0; i < n - 1; i++) {
        cin >> input;
        ActualSum += input;
    }

    ll missing = ExpectedSum - ActualSum;
    cout << missing << el;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}