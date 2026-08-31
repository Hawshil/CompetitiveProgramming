#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 != (i + 1) % 2)
        {
            possible = false;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}