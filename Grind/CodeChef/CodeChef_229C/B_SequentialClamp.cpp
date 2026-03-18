#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int a, b;
    cin >> a >> b;
    int Y = b;

    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        
        if(Y < a){
            Y = a;
        }
        else if(Y > b){
            Y = b;
        }
    }

    cout << Y << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}