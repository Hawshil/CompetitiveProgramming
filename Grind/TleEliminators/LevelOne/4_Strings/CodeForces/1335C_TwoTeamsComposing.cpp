#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
#define el '\n'

void solve()
{
    ll n, maxFreqElement = 0;
    cin >> n;

    vector<ll> nums(n, 0);
    unordered_map<ll, ll> freq;
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
        freq[nums[i]]++;
        if (freq[nums[i]] > freq[maxFreqElement])
        {
            maxFreqElement = nums[i];
        }
    }

    freq.erase(0);
    if (freq[maxFreqElement] > freq.size())
    {
        cout << freq.size() << el;
    }
    else
    {
        cout << min((ll)(freq.size() - 1), freq[maxFreqElement]) << el;
    }
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