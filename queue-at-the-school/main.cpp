#include <iostream>

int main()
{
    int n, t;
    bool queue_switch = false;
    std::string queue;

    std::cin >> n >> t >> queue;

    for(int i = 0; i < t; ++i)
    {
        for(int j = n - 1; j > 0; --j)
        {
            if(queue[j - 1] == 'B' && queue[j] == 'G' && queue_switch == false)
            {
                queue[j - 1] = 'G';
                queue[j] = 'B';
                queue_switch = true;
            }
            else queue_switch = false;
        }
    }

    std::cout << queue << "\n";
}