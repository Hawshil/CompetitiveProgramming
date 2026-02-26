#include <bits/stdc++.h>
using namespace std;

bool isSub(string &x, string &s, int n, int m)
{
    size_t pos = x.find(s);
    if (pos != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        while (!isSub(x, s, n, m))
        {
            x += x;
            n *= 2;
            count++;
            if (n > (3 * m))
            {
                break;
            }
        }

        if (isSub(x, s, n, m))
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}