#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

long long f(const vector<int>& A, const vector<int>& B, int X, const int& N){
    int Y = X;
    for(int i = 0; i < N; i++){
        Y = max(Y + B[i], A[i]);
    }
    return Y;
}

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        
        vector<int> B(N);
        for(int i = 0; i < N; i++){
            cin >> B[i];
        }

        long long sum = 0;
        for(int m = 1; m <= M; m++) sum += f(A, B, m, N);

        cout << sum << endl;
    }
    return 0;
}
