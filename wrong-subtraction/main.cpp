#include <iostream>

int main()
{
    int n, k;

    std::cin >> n >> k;

    for(int i = 0; i < k; ++i)
    {
        n % 10 == 0 ? n /= 10 : n -= 1;
    }

    std::cout << n << "\n";
}