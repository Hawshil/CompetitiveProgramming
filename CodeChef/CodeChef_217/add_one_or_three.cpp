#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int N, int M){
    int one_countx2 = ((3*N) - M);

    if(one_countx2 < 0 || one_countx2%2 != 0) return false;
    else{
        int one_count = one_countx2/2;
        if(one_count <= N && one_count >= 0) return true;
        else return false;
    }
}

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N, M;
        cin >> N >> M;
        
        if(isPossible(N, M)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
