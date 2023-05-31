#include <iostream>

int main()
{
    std::string result;
    int n;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0) result += "I hate";
        else result += "I love";

        if(i != n - 1) result += " that ";
    }

    std::cout << result << " it\n";
}