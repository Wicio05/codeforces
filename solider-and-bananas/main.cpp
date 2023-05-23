#include <iostream>

int main()
{
    int w, k, n;
    
    std::cin >> k >> n >> w;

    int cost = ((1 + w) * k * w) >> 1;

    std::cout << (cost > n ? cost - n : 0) << "\n";
}