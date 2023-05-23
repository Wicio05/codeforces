#include <iostream>

int main()
{
    int n, count = 0;
    std::string stones;

    std::cin >> n >> stones;

    for(int i = 1; i < n; ++i)
    {
        if(stones[i] == stones[i - 1]) count++;
    }

    std::cout << count << "\n";
}