#include <iostream>
#include <string>

int findNextDivider(int &divider) 
{
    std::string divider_str = std::to_string(divider);
    int i = divider_str.length() - 1;

    while (divider_str[i] == '7' && i >= 0) 
    {
        --i;
    }

    if (i == -1) 
    {
        divider_str = "4" + divider_str;
    } 
    else 
    {
        divider_str[i] = '7';
        return std::stoi(divider_str);
    }

    for (int idx = i + 2; idx < divider_str.length(); ++idx) 
    {
        divider_str[idx] = '4';
    }

    return std::stoi(divider_str);
}

int main() 
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;

    int divider = 4;

    std::cin >> n;

    while (divider <= n) 
    {
        if (n % divider == 0) 
        {
            std::cout << "YES\n";
            return 0;
        }

        divider = findNextDivider(divider);
        
        // std::cout << divider << "\n";
    }

    std::string helper = std::to_string(n);

    for (int i = 0; i < helper.length(); ++i) 
    {
        if (helper[i] != '4' && helper[i] != '7') 
        {
            std::cout << "NO";
            return 0;
        }
    }

    std::cout << "YES";
}