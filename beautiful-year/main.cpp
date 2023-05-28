#include <iostream>
#include <string>

bool checkIfDistinct(int &year);

int main()
{
    int year;

    std::cin >> year;
    year++;

    while(!checkIfDistinct(year)) year++;
    
    std::cout << year << "\n";
}

bool checkIfDistinct(int &year)
{
    std::string yearStr = std::to_string(year);
    for(int i = 0; i < 3; ++i)
    {
        for(int j = i + 1; j < 4; ++j)
        {
            if(yearStr[i] == yearStr[j]) return false;
        }
    }
    return true;
}