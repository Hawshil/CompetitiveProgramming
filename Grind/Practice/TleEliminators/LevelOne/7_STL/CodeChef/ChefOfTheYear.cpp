#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static constexpr ll MOD = 1000000007LL;
#define el '\n'

void solve()
{
    ll n, m;
    cin >> n >> m;

    map<string, string> chefcountry;
    for (ll i = 0; i < n; i++)
    {
        string chef, country;
        cin >> chef >> country;

        chefcountry[chef] = country;
    }

    map<string, ll> chefvotes, countryvotes;
    ll maxChefVotes = 0, maxCountryVotes = 0;
    for (ll i = 0; i < m; i++)
    {
        string chef;
        cin >> chef;

        chefvotes[chef]++;
        maxChefVotes = max(maxChefVotes, chefvotes[chef]);

        string country = chefcountry[chef];
        countryvotes[country]++;
        maxCountryVotes = max(maxCountryVotes, countryvotes[country]);
    }

    set<string> maxChefs;
    for (const auto [chef, votes] : chefvotes)
    {
        if (votes == maxChefVotes)
        {
            maxChefs.insert(chef);
        }
    }

    set<string> maxCountry;
    for (const auto &[country, votes] : countryvotes)
    {
        if (votes == maxCountryVotes)
        {
            maxCountry.insert(country);
        }
    }

    cout << *maxCountry.begin() << el << *maxChefs.begin() << el;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}