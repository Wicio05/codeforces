#include <iostream>
#include <vector>

int main()
{
    int n;

    std::cin >> n;

    std::vector<int> out(n);

    for(int i = 0; i < n; ++i)
    {
        int p;
        std::cin >> p;
        out[p - 1] = i + 1;
    }
    
    for(int i = 0; i < n; ++i)
    {
        std::cout << out[i] << " ";
    }
    
}