#include <iostream>
#include <string>

int main()
{
    int n;
    std::string word;

    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        std::cin >> word;
        if(word.length() > 10)
        {
            word = word[0] + std::to_string(word.length() - 2) + word[word.length() - 1];
        }
        
        std::cout << word << "\n";
    }
}