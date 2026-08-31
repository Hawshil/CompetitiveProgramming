#include <iostream>
using namespace std;

int main() {
	int N, M;
    cin >> N >> M;

    cout << max(N-M, 0) << endl;
    return 0;
}
