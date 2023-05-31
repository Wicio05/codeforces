#include <iostream>

int main()
{
    long long n;

    std::cin >> n;

    if(n % 2 == 0) std::cout << (n >> 1) << "\n";
    else std::cout << ((n - 1) >> 1) - n << "\n";
}