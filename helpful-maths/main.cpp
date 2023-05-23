#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string in;
    
    std::cin >> in;

    std::sort(in.begin(), in.end());

    for(int i = in.length() / 2; i < in.length() - 1; ++i)
    {
        std::cout << in[i] << in[i - (in.length() / 2)];
    }
    std::cout << in[in.length() - 1];
}