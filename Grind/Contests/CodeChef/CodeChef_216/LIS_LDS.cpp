#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int LIS(const vector<int> &frequency, const int &N)
{
    int score = 1, maxScore = 1, maxest = frequency[0];
    for (int i = 0; i < N - 1; i++)
    {
        if (maxest < frequency[i + 1])
        {
            score++;
            maxest = frequency[i + 1];
        }
        else
        {
            while ((i < N - 1) && (maxest >= frequency[i + 1]))
            {
                i++;
            }
        }
    }

    return score;
}

int LDS(const vector<int> &frequency, const int &N)
{
    int score = 1, maxScore = 1, minest = frequency[0];
    for (int i = 0; i < N - 1; i++)
    {
        if (minest > frequency[i + 1])
        {
            score++;
            minest = frequency[i + 1];
        }
        else
        {
            while ((i < N - 1) && (minest <= frequency[i + 1]))
            {
                i++;
            }
        }
    }

    return score;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;

        vector<int> frequency(N);
        for (int i = 0; i < N; i++)
            cin >> frequency[i];

        cout << min(LIS(frequency, N), LDS(frequency, N)) << endl;
    }

    return 0;
}
