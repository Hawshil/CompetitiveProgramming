#include <bits/stdc++.h>
using namespace std;

bool isLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
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
    char c;
    cin >> c;

    if (isLowerCase(c))
    {
        cout << char(c - 'a' + 'A') << endl;
    }
    else
    {
        cout << char(c - 'A' + 'a') << endl;
    }

    return 0;
}