#include <iostream>

int main()
{
    int x, steps = 0;

    std::cin >> x;

    for(int i = 5; i > 0 && x > 0; --i)
    {
        steps += x / i;
        x -= (x / i) * i;
    }

    std::cout << steps << "\n";
}