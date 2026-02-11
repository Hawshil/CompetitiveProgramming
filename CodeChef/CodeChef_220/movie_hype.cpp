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

        vector<int> seats(n+1);
        for(int i = 0; i <= n; i++){
            cin >> seats[i];
        }

        int minLoudness = INT_MAX;

        for(int i = 0; i < n; i++){
            minLoudness = min(minLoudness, max(seats[i], seats[i+1]));
        }

        cout << minLoudness << endl;

    }

    return 0;
}
