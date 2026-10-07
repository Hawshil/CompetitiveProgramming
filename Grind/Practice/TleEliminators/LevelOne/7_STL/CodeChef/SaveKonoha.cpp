    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;
    static constexpr ll MOD = 1000000007LL;
    #define el '\n'

    void AlmightyPush(map<ll, ll, greater<ll>> &soldiers, ll n, ll z)
    {
        ll attacks = 0;
        while (!soldiers.empty() && z > 0)
        {
            auto it = soldiers.begin();
            ll strength = it->first;
            ll count = it->second;

            attacks++;
            z -= strength;

            if(count == 1){
                soldiers.erase(it);
            }
            else{
                soldiers[strength] = count - 1;
            }

            ll newStrength = strength / 2;
            if(newStrength > 0)
            {
                soldiers[newStrength]++;
            }
        }

        if (z > 0)
        {
            cout << "Evacuate" << el;
        }
        else
        {
            cout << attacks << el;
        }
    }
    void solve()
    {
        ll n, z;
        cin >> n >> z;

        map<ll, ll, greater<ll>> soldiers;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            soldiers[a]++;
        }

        AlmightyPush(soldiers, n, z);
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