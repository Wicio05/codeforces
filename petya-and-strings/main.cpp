#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;
    int val1 = 0, val2 = 0;
    int result = 0;

    std::cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); ++i)
    {
        val1 += ((int) s1[i]) > 90 ? s1[i] - 32 : s1[i];
        val2 += ((int) s2[i]) > 90 ? s2[i] - 32 : s2[i];
        
        if(val1 != val2)
        {
            if(val1 < val2) result = -1;
            else result = val1 > val2;
            break;
        }
    }

    std::cout << result << "\n";
}