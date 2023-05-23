#include <iostream>

int main()
{
    int val;

    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            std::cin >> val;

            if(val == 1)
            {
                std::cout << (i >= 2 ? i - 2 : 2 - i) + (j >= 2 ? j - 2 : 2 - j) << "\n";
            }
        }
    }
}