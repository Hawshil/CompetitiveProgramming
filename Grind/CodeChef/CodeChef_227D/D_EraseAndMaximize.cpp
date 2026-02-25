#include <bits/stdc++.h>
using namespace std;

int eraser(int &n, int &s)
{
    if (s <= (n * 5))
    {
        return (n * 6);
    }
    else if (s == (n * 6))
    {
        return (n * 5);
    }
    else
    {
        int diff = (n * 6) - s;
        return (diff * 6) + ((n - diff) * 5);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int ans = eraser(n, s);
        cout << ans << endl;
    }
    return 0;
}