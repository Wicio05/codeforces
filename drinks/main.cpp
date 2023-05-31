#include <iostream>

int main()
{
    int n;
    double volume;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int p;
        std::cin >> p;
        volume += p;
    }

    std::cout << volume / n << "\n";
}