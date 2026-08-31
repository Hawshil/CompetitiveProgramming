#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N, sum = 0, addition = 0;
        cin >> N;
        vector<int> arr(N, 0);

        for(int i = 0; i < N; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        
        while(sum < 0){
            addition++;
            sum += N;
        }

        cout << addition << endl;
    }
    return 0;
}
