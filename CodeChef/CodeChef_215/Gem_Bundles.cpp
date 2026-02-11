#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int r, g, b;
        cin >> r >> g >> b;

        int coins = 0, bundle = min(r, min(g, b));
        r -= bundle;
        g -= bundle;
        b -= bundle;

        coins += (10 * bundle) + (3 * r) + (3 * g) + (3 * b);
        cout << coins << endl;
    }
    return 0;
}