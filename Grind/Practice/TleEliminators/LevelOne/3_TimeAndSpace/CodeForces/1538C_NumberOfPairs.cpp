#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

int bsUpper(const vector<ll> &nums, int j, ll l, ll r)
{
    int start = 0, end = j - 1;
    int mid = start + ((end - start) / 2);
    int upperbound = -1;

    while (start <= end)
    {
        ll sum = nums[mid] + nums[j];

        if (sum >= l && sum <= r)
        {
            upperbound = mid;
            start = mid + 1;
        }
        else if (sum < l)
        {
            start = mid + 1;
        }
        else if (sum > r)
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return upperbound;
}

int bsLower(const vector<ll> &nums, int j, ll l, ll r)
{
    int start = 0, end = j - 1;
    int mid = start + ((end - start) / 2);
    int lowerbound = -1;

    while (start <= end)
    {
        ll sum = nums[mid] + nums[j];

        if (sum >= l && sum <= r)
        {
            lowerbound = mid;
            end = mid - 1;
        }
        else if (sum < l)
        {
            start = mid + 1;
        }
        else if (sum > r)
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return lowerbound;
}

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int j = n - 1;
    ll pairCount = 0LL;
    while (j > 0 && nums[j] >= r)
    {
        j--;
    }

    while (j > 0)
    {
        int upperbound = bsUpper(nums, j, l, r);
        int lowerbound = bsLower(nums, j, l, r);

        if (lowerbound != -1)
        {
            pairCount += upperbound - lowerbound + 1;
        }

        j--;
    }
    cout << pairCount << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}