#include <bits/stdc++.h>
using namespace std;

bool solve(int &a, int &b, int &c)
{
    if ((c % 3) != 0)
    {
        return false;
    }

    b -= c / 3;
    return (b == (2 * a));
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