#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7; 

void solve() {
    int N;
    cin >> N;
    
    vector<int> a(N), b(N);
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < N; ++i) cin >> b[i];

    vector<int> min_top(N, INF);

    min_top[0] = min(a[0], b[0]);

    for(int i = 1; i < N; ++i) {
        if (min_top[i-1] == INF) break; 
        
        int prev = min_top[i-1];
        int cur_min = INF;

        if (a[i] >= prev) cur_min = min(cur_min, a[i]);
        if (b[i] >= prev) cur_min = min(cur_min, b[i]);

        min_top[i] = cur_min;
    }

    vector<int> max_bot(N, -INF);

    max_bot[N-1] = max(a[N-1], b[N-1]);

    for(int i = N - 2; i >= 0; --i) {
        if (max_bot[i+1] == -INF) break;

        int next_val = max_bot[i+1];
        int cur_max = -INF;

        if (a[i] <= next_val) cur_max = max(cur_max, a[i]);
        if (b[i] <= next_val) cur_max = max(cur_max, b[i]);

        max_bot[i] = cur_max;
    }

    bool possible = false;

    for(int k = 0; k < N; ++k) {
        
        int left_bound = (k == 0) ? -INF : min_top[k-1];
        int right_bound = (k == N-1) ? INF : max_bot[k+1];

        if (left_bound == INF || right_bound == -INF) continue;

        if (a[k] >= left_bound && b[k] <= right_bound && a[k] <= b[k]) {
            possible = true;
            break;
        }

        if (b[k] >= left_bound && a[k] <= right_bound && b[k] <= a[k]) {
            possible = true;
            break;
        }
    }

    if (possible) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}