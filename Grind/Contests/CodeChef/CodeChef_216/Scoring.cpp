#include <iostream>
using namespace std;

int main() {
	int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int x, y;
        cin >> x >> y;

        int alice = (x + y) / 2;
        int bob = (y - x) / 2;
        
        cout << alice << " " << bob << endl;
    }
}
