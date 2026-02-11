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

        int wins = 0, chef = 0, antichef = 0;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;            

            if(c == '1') chef++;
            else antichef++;

            if(chef > antichef) wins++;
        }

        cout << wins << endl;
    }

    return 0;
}
