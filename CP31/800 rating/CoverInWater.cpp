#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<char> s(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int gap = 0, total_gap = 0, max_gap = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                gap++;
            }
            else
            {
                total_gap += gap;
                max_gap = max(gap, max_gap);
                gap = 0;
            }
        }

        max_gap = max(gap, max_gap);
        total_gap += gap;

        if (max_gap >= 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total_gap << endl;
        }
    }
}