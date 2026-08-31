#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int num = n;

    if ((n - num) > 0)
    {
        cout << "float " << num << " " << n - num << endl;
    }
    else
    {
        cout << "int " << num << endl;
    }

    return 0;
}