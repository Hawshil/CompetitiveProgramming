#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x)
    {
    case 1:
    {
        cout << 8000;
        break;
    }
    case 2:
    {
        cout << 4000;
        break;
    }
    case 3:
    {
        cout << 2000;
        break;
    }
    case 4:
    {
        cout << 1000;
        break;
    }
    default:
        cout << 1000;
    }
    return 0;
}
