#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxi, mini;
    if (a >= b)
    {
        if (a >= c)
        {
            maxi = a;
            if (b >= c)
            {
                mini = c;
            }
            else
            {
                mini = b;
            }
        }
        else
        {
            maxi = c;
            mini = b;
        }
    }
    else
    {
        if (b >= c)
        {
            maxi = b;
            if (a >= c)
            {
                mini = c;
            }
            else
            {
                mini = a;
            }
        }
        else
        {
            maxi = c;
            mini = a;
        }
    }

    cout << mini << " " << maxi << endl;

    return 0;
}