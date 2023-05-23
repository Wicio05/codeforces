#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string username;

    std::cin >> username;

    std::sort(username.begin(), username.end());

    for(std::string::iterator i = username.begin() + 1; i < username.end(); ++i)
    {
        if(*i == *(i - 1))
        {
            username.erase(i);
            --i;
        }
    }

    if(username.length() % 2 == 0)
        std::cout << "CHAT WITH HER!\n";
    else
        std::cout << "IGNORE HIM!\n";
}