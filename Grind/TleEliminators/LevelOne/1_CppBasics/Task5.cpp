#include <bits/stdc++.h>
using namespace std;

bool evenWatermelons(int weight)
{
    if (weight < 3)
    {
        return false;
    }
    else
    {
        if ((weight % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int weight;
    cin >> weight;

    if (evenWatermelons(weight))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}