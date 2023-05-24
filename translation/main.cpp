#include <iostream>

int main()
{
    std::string s, t, check;

    std::cin >> s >> t;

    for(int i = t.length() - 1; i >= 0; --i)
    {
        check += t[i];
    }

    std::cout << (check == s ? "YES\n" : "NO\n");
}