#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    int cost = 0, sell = 0;
    for (int i = 0; i < n; i++)
    {

        if (k > 0)
        {
            if (coins[i] > 5)
            {
                cost += 5;
                sell += coins[i];
                k--;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (coins[i] > 10)
            {
                cost += 10;
                sell += coins[i];
            }
            else
            {
                break;
            }
        }
    }

    cout << sell - cost << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}