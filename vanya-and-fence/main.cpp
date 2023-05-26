#include <iostream>

int main()
{
    int n, h, a, min_width;

    std::cin >> n >> h;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> a;
        
        if(a > h) min_width++;

        min_width++;
    }

    std::cout << min_width << "\n";
}