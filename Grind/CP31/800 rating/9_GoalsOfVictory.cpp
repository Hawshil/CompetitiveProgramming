#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;
using std::unordered_map;
using std::vector;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int efficiency;
            cin >> efficiency;

            sum += efficiency;
        }

        cout << -sum << endl;
    }
    return 0;
}