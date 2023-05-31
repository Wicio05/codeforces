#include <iostream>
#include <string>

int main()
{
    int t;

    std::cin >> t;

    for(int i = 0; i < t; ++i)
    {
        int n;
        std::string res;

        std::cin >> n;

        for(int j = 0; j < n; ++j)
        {
            int num;
            std::cin >> num;
            res += std::to_string(n - num + 1) + " ";
        }

        std::cout << res << "\n";
    }
}