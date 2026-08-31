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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> perms(n);
        for (int i = 0; i < n; i++)
        {
            cin >> perms[i];
        }

        // print before portal
        for (int i = 0; i < x; i++)
        {
            cout << perms[i] << " ";
        }

        // find smallest
        int mini = perms[x], minIndex = x;
        for (int i = x; i < y; i++)
        {
            if (perms[i] < mini)
            {
                mini = perms[i];
                minIndex = i;
            }
        }

        // print smallest to y
        for (int i = minIndex; i < y; i++)
        {
            cout << perms[i] << " ";
        }

        // print x to smallest
        for (int i = x; i < minIndex; i++)
        {
            cout << perms[i] << " ";
        }

        // print after portal
        for (int i = y; i < n; i++)
        {
            cout << perms[i] << " ";
        }
        
        cout << endl;
    }
    return 0;
}