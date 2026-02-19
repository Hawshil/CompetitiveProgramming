#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, C;
        cin >> N >> C;

        vector<int> A(N);
        for (int &x : A)
            cin >> x;

        string S;
        cin >> S;

        int sumNormal = 0, sumSpecial = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                sumNormal += A[i];
            else
                sumSpecial += A[i];
        }

        int best = sumNormal;

        if (sumNormal >= C)
        {
            best = max(best, sumNormal + sumSpecial - C);
        }

        cout << best << "\n";
    }

    return 0;
}
