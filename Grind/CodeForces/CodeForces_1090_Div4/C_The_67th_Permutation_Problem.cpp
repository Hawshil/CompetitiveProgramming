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
        int n;
        cin >> n;

        vector<int> ans;
        for (int i = 1, end = 3 * n; i <= n; i++, end -= 2)
        {
            ans.push_back(i);
            ans.push_back(end - 1);
            ans.push_back(end);
        }

        for (const auto &a : ans)
        {
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}