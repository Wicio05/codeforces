#include <iostream>

int main()
{
    int l, b, result = 0;

    std::cin >> l >> b;

    while(l <= b)
    {
        l *= 3;
        b *= 2;
        result++;
    }

    std::cout << result << "\n";
}