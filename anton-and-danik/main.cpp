#include <iostream>

int main()
{
    int n, a = 0;
    std::string games;

    std::cin >> n >> games;

    for(int i = 0; i < n; ++i)
    {
        if(games[i] == 'A') a++;
    }

    if(a > n - a) std::cout << "Anton" << "\n";
    else if(a < n - a) std::cout << "Danik" << "\n";
    else std::cout << "Friendship" << "\n";
}