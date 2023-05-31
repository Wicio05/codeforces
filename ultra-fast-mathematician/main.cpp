#include <iostream>
#include <bitset>
#include <string>

int main()
{
    std::string a, b;

    std::cin >> a >> b;

    for(int i = 0; i < a.length(); ++i)
    {
        std::cout << (a[i] != b[i] ? 1 : 0);
    }
}