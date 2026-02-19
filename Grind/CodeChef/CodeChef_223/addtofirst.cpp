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

        vector<int> B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        bool canAtoB = true;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] > B[i])
            {
                canAtoB = false;
                break;
            }
            else if (A[i] < B[i])
            {
                if (A[i] <= maxi)
                {
                    canAtoB = false;
                    break;
                }
            }

            maxi = max(maxi, A[i]);
        }

        if (canAtoB)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
