#include <bits/stdc++.h>
using namespace std;

bool solve(int &a, int &b, int &c)
{
    int pass = 0;
    if(a >= 50) pass++;
    if(b >= 50) pass++;
    if(c >= 50) pass++;

    return pass >= 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool ans = solve(a, b, c);
        if (ans == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}