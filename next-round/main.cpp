#include <iostream>

int main()
{
    int n, k, result = 0;
    std::cin >> n >> k;

    int *a = new int[n];

    for(int i = 0; i < n; ++i)
    {
        std::cin >> a[i]; 
    }

    for(int i = 0; i < n; ++i)
    {
        if(a[i] >= a[k - 1] && a[i] > 0)
            result++;
        else break;
    }

    std::cout << result << "\n";
}