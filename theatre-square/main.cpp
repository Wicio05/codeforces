#include <iostream>

int main()
{
    unsigned long long n, m, a;

    std::cin >> n >> m >> a;

    std::cout << ((n + a - 1) / a) * ((m + a - 1) / a) << "\n";
}