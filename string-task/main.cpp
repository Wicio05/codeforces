#include <iostream>
#include <string>

int main()
{
    std::string in;
    std::string vowels = "aoyeuiAOYEUI";

    std::cin >> in;

    in.reserve(in.length() * 2);

    for(std::string::iterator it = in.begin(); it < in.end(); ++it)
    {
        if (vowels.find(*it) != std::string::npos) 
        {
            in.erase(it);
            it--;
        }
        else
        {
            if((char) *it < 91) *it += 32;
            in.insert(it, '.');
            it++;
        }
    }
    
    std::cout << in << "\n";
}