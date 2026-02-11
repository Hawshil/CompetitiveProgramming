#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int size = S.size();
        for (int i = 0, j = 1; i < size && j < size; i += 2, j += 2)
        {
            swap(S[i], S[j]);
        }
        for (int i = 0; i < size; i++)
        {
            S[i] = 'z' - S[i] + 'a';
        }
        cout << S << endl;
    }
    return 0;
}
