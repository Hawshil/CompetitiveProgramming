#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int left, melt, minutes;
        cin >> left >> melt >> minutes;

        left = max(0, left - (melt * minutes));
        cout << left << endl;
    }
    return 0;
}