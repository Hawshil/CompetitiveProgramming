#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long prod = 1LL;
    prod = (prod * A) % 100;
    prod = (prod * B) % 100;
    prod = (prod * C) % 100;
    prod = (prod * D) % 100;

    int ans = prod % 100;
    cout << setw(2) << setfill('0') << ans << endl;

    return 0;
}