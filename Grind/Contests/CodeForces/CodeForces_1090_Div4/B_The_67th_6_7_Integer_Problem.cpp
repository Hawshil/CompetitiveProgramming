#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::stack;
using std::string;
using std::unordered_map;
using std::vector;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0, maxi = -100;
        for (int i = 0; i < 7; i++)
        {
            int a;
            cin >> a;
            sum += a;
            maxi = max(maxi, a);
        }

        cout << -(sum - (2 * maxi)) << endl;
    }
    return 0;
}