#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int extra = x % k;

        if (n - x >= k - extra)
            cout << min(extra, k - extra) << endl;
        else
            cout << extra << endl;
    }
    return 0;
}
