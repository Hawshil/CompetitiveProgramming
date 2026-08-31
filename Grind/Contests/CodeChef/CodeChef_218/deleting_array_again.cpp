#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        int cost = 0;

        while(!a.empty()){
            int aLastIndex = a.size()-1;
            int cMinV = c[0], cMinI = 0;
            for(int i = 0; i <= aLastIndex; i++){
                if(c[i] < cMinV){
                    cMinV = c[i];
                    cMinI = i;
                }
            }
            for(int i = cMinI; i <= aLastIndex; i++){
                cost += (cMinV * a[i]);
            }

            a.erase((a.begin() + cMinI), (a.begin() + aLastIndex + 1));
        }

        cout << cost << endl;
    }

    return 0;
}
