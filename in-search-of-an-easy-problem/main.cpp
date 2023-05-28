#include <iostream>

int main()
{
    int n, a;

    std::cin >> n;

    for(; n > 0; --n)
    {
        std::cin >> a;

        if(a) break;
    }

    std::cout << (n ? "HARD\n" : "EASY\n");
}