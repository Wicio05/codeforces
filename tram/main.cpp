#include <iostream>

int main()
{
    int n, a, b, curr_cap = 0, min_cap = 0;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> a >> b;

        curr_cap += b - a;
        if(curr_cap > min_cap) min_cap = curr_cap;
    }

    std::cout << min_cap << "\n";
}