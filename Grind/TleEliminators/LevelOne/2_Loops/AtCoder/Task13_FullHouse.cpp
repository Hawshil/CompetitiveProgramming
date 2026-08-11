#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

bool fullHouse() {
    unordered_map<int, int> hash;
    for (size_t i = 0; i < 5; i++) {
        int a;
        cin >> a;

        hash[a]++;
    }

    if (hash.size() == 2) {
        vector<int> cards(2, 0);

        size_t index = 0;
        for (const auto &p : hash) {
            cards[index++] = p.second;
        }

        if ((cards[0] == 2 && cards[1] == 3) || (cards[0] == 3 && cards[1] == 2)) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fullHouse()) {
        cout << "Yes" << el;
    } else {
        cout << "No" << el;
    }

    return 0;
}