#include <iostream>
#include <string>

int main()
{
    std::string n;
    int lucky_count = 0;

    std::cin >> n;

    for(int i = 0; i < n.length(); ++i)
    {
        if(n[i] == '4' || n[i] == '7') lucky_count++;
    }

    std::cout << (lucky_count == 4 || lucky_count == 7 ? "YES" : "NO") << "\n";
}