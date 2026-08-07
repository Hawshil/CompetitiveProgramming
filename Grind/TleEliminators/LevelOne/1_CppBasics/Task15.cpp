#include <bits/stdc++.h>
using namespace std;

bool hardCompare(long double a, long double b, long double c, long double d)
{
    if (a == 1)
    {
        return false;
    }

    if (c == 1)
    {
        return true;
    }

    long double left = b * logl(a);
    long double right = d * logl(c);

    return (left > right);
}

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (hardCompare(a, b, c, d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}