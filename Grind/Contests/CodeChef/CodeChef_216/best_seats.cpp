#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    for(int t = 0; t < T; t++){
        int N;
        cin >> N;
        vector<int> costs(N); 
        for(int i = 0; i < N; i++) cin >> costs[i];

        int minCost = INT_MAX;
        for(int i = 0; i < N-1; i++) if(costs[i] + costs[i+1] < minCost) minCost = costs[i] + costs[i+1];

        cout << minCost << endl;
    }

    return 0;
}
