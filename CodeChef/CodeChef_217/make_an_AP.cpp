#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

long long gcd(long long a, long long b){
    while(a > 0 && b > 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return (b == 0) ? a : b; 
}

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N;
        cin >> N;
        vector<int> arr(N);

        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        long long diff = LLONG_MAX, d = 0, operations = 0;
        for(int i = 1; i < N; i++){
            d = gcd(d, arr[i] - arr[0]);
        }
        
        for(int i = 0; i < N-1; i++){
            diff = arr[i+1] - arr[i];
            operations += ((diff/d) - 1);
        }
        
        cout << operations << endl;
    }
    return 0;
}
