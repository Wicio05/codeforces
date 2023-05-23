#include <iostream>

int main()
{
    int n, P, V, T, result = 0;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> P >> V >> T;

        if(P + V + T > 1) result++;  
    }

    std::cout << result << "\n";
}