#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        if (l > r) // When L is greater than R
        {
            swap(l, r);
        }

        long long sum = ((r - l + 1) * (l + r)) / 2;
        cout << sum << "\n";
    }

    return 0;
}