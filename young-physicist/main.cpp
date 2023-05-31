#include <iostream>

int main()
{
    int n, x = 0, y = 0, z = 0;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int vx, vy, vz;
        std::cin >> vx >> vy >> vz;
        x += vx;
        y += vy;
        z += vz;
    }

    std::cout << (x == 0 && y == 0 && z == 0 ? "YES\n" : "NO\n");
}