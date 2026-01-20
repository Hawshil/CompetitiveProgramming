#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool matched = false;

        unordered_map<char, int> hash;
        for(const char& c : s) hash[c]++;

        for(const auto& p : hash){
            if(p.second >= 2) {
                matched = true;
                break;
            }
        }

        if(matched) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}
