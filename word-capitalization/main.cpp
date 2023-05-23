#include <iostream>
#include <string>

int main()
{
    std::string in;

    std::cin >> in;

    if(in[0] > 90) in[0] -= 32;

    std::cout << in << "\n";
}