#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << a << endl;

            if (b < c)
            {
                cout << b << endl
                     << c << endl;
            }
            else
            {
                cout << c << endl
                     << b << endl;
            }
        }
        else
        {
            cout << c << endl
                 << a << endl
                 << b << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << endl;

            if (a < c)
            {
                cout << a << endl
                     << c << endl;
            }
            else
            {
                cout << c << endl
                     << a << endl;
            }
        }
        else
        {
            cout << c << endl
                 << b << endl
                 << a << endl;
        }
    }

    cout << endl
         << a << endl
         << b << endl
         << c << endl;

    return 0;
}