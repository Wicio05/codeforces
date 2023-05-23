#include <iostream>
#include <string>

int main()
{
    std::string word, lower, upper;

    std::cin >> word;

    int upper_count = 0, lower_count = 0;

    for(std::string::iterator it = word.begin(); it < word.end(); ++it)
    {
        *it > 90 ? lower_count++ : upper_count++;
        lower += tolower(*it);
        upper += toupper(*it);
    }

    std::cout << (lower_count >= upper_count ? lower : upper) << "\n";
}