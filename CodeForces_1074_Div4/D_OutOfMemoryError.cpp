#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> nums(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        a = nums;
        vector<int> b(m), c(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i] >> c[i];
        }

        for (int i = 0; i < m; i++)
        {
            a[b[i] - 1] += c[i];
            if (a[b[i] - 1] > h)
            {
                a = nums;
            }
        }

        for (const int &i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
