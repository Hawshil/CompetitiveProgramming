#include <bits/stdc++.h>
using namespace std;

int ticketBuyer(int &n, int &k, vector<int> &nums, string &str, int &s)
{
    vector<int> freeSeats;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            freeSeats.emplace_back(nums[i]);
        }
    }

    if (freeSeats.size() < k)
    {
        return -1;
    }

    sort(freeSeats.begin(), freeSeats.end());

    int cost = 0, i = 0;
    while (k--)
    {
        cost += freeSeats[i++];
    }

    return cost;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        string str;
        cin >> str;
        int s = str.size();

        int ans = ticketBuyer(n, k, nums, str, s);
        cout << ans << endl;
    }
    return 0;
}