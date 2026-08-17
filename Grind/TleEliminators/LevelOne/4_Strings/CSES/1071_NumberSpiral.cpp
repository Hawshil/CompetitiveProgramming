#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll row, col;
        cin >> row >> col;

        ll channel = max(row, col);
        ll value = ((channel - 1) * (channel - 1)) + 1;

        if ((channel % 2) == 0) // down left
        {
            if (col == channel)
            {
                value += row - 1;
            }
            else
            {
                value += (row - 1) + (channel - col);
            }
        }
        else // right up
        {
            if (row == channel)
            {
                value += col - 1;
            }
            else
            {
                value += (channel - row) + (col - 1);
            }
        }

        cout << value << el;
    }

    return 0;
}