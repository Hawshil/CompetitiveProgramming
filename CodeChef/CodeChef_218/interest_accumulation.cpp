#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long>& a, int n, int l, int r){
    long long score = 0;
    bool emptyHand = true;
    
    for(int i = 0; i < n; i++){
        if(emptyHand){
            
        }
        else{

        }
    }
}

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

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        for(int L = 0; L < n; L++){
            for(int R = L; R < n; R++){
                ans = (ans + f(a, n, L, R)) % 998244353;
            }
        }

        cout << (ans % 998244353) << endl;
    }

    return 0;
}
