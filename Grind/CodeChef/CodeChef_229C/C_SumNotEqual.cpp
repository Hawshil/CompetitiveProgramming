#include <bits/stdc++.h>
using namespace std;

void summer(vector<int> &arr, int &n)
{
    if (n >= 3)
    {
        if (arr[0] + arr[1] != arr[2])
        {
            cout << 1 << " " << 2 << " " << 3 << endl;
            return;
        }
        if (arr[0] + arr[2] != arr[1])
        {
            cout << 1 << " " << 3 << " " << 2 << endl;
            return;
        }
        if (arr[1] + arr[2] != arr[0])
        {
            cout << 2 << " " << 3 << " " << 1 << endl;
            return;
        }
    }

    pair<int, int> maxi = {INT_MIN, -1}, mini = {INT_MAX, -1};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi.first)
        {
            maxi = {arr[i], i};
        }
        if (arr[i] < mini.first)
        {
            mini = {arr[i], i};
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != mini.second && i != maxi.second)
        {
            if (arr[i] + mini.first != maxi.first)
            {
                cout << mini.second + 1 << " " << i + 1 << " " << maxi.second + 1 << endl;
                return;
            }
            else if (arr[i] + maxi.first != mini.first)
            {
                cout << maxi.second + 1 << " " << i + 1 << " " << mini.second + 1 << endl;
                return;
            }
            else if (mini.first + maxi.first != arr[i])
            {
                cout << maxi.second + 1 << " " << mini.second + 1 << " " << i + 1 << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    summer(arr, n);
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