#include <iostream>
#include <string>
int main()
{
    int n, ans(0);
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string statement = "";
        std::cin >> statement;
        if (statement[1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }

    std::cout << ans;
    return 0;
}