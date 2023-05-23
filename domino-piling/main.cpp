#include <iostream>

int main()
{
    int m, n;

    std::cin >> m >> n;

    if(m == 1 && n == 1) std::cout << 0 << "\n";
    else std::cout << (m * n >> 1) << "\n";
}