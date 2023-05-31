#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
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