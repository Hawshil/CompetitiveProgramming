#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minsamdiff(const int& N, const int& K){
    if(N == 1) return 0;

    
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N, K;
        cin >> N >> K;
        
        cout << minsamdiff(N, K) << endl;
    }

    return 0;
}
