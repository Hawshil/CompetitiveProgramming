#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        vector<int> integers(N);
        for (int i = 0; i < N; i++)
            cin >> integers[i];

        vector<int> sub;
        for (int i = 0; i < N; i++)
        {
            bool addable = true;
            for (int j = 0; j < sub.size(); j++)
            {
                if (abs(integers[i] - sub[j]) != (integers[i] ^ sub[j]))
                    addable = false;
            }
            if (addable)
                sub.push_back(integers[i]);
        }

        cout << sub.size() << endl;
    }

    return 0;
}
