#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int div = a/x;
        b += (div * y);
        a = a % x;

        cout << b + a << endl;
    }
    return 0;
}