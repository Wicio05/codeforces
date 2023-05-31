#include <iostream>

int main()
{
    std::string pos;
    int counter = 1;
    
    std::cin >> pos;

    char p = pos[0];

    for(int i = 1; i < pos.length(); ++i)
    {
        if(p == pos[i]) counter++;
        else
        {
            p = pos[i];
            counter = 1;
        }

        if(counter == 7 || counter + pos.length() - i - 1 < 7) break;
    }

    std::cout << (counter == 7 ? "YES\n" : "NO\n");
}