#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int ans = 0;
        unordered_set<int> uniqs;

        for (int i = 0; i < n; i++)
        {
            if (A[i] == 1)
            {
                ans++;
                uniqs.insert(A[i]);
            }
            else if ((uniqs.find(A[i] - 1) != (uniqs.end())))
            {
                ans++;
                uniqs.insert(A[i]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
