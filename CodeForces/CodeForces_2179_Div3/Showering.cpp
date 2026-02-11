#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long S = 0;
        for (int i = 0; i < n - 1; i++)
        {
            S += llabs(a[i] - a[i + 1]);
        }

        long long ans = S;

        for (int k = 0; k < n; k++)
        {
            long long cur = S;

            if (k > 0)
                cur -= llabs(a[k] - a[k - 1]);
            if (k < n - 1)
                cur -= llabs(a[k] - a[k + 1]);
            if (k > 0 && k < n - 1)
                cur += llabs(a[k - 1] - a[k + 1]);

            ans = min(ans, cur);
        }

        cout << (double)ans << '\n';
    }
    return 0;
}
