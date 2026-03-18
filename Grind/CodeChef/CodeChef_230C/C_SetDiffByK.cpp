#include <bits/stdc++.h>
using namespace std;

bool permExists(vector<int> &arr, int n, int k)
{
    set<int> setty;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            setty.insert(i+1);
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> binn(n);
    for (int i = 0; i < n; i++)
    {
        cin >> binn[i];
    }

    if (permExists(binn, n, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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