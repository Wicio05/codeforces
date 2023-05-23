#include <iostream>
#include <string>

int main()
{
    int n, x = 0;
    std::string statement;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> statement;

        if(statement[statement.length() >> 1] == '+')
            x++;
        else x--;
    }

    std::cout << x << "\n";
}