#include <iostream>

int main()
{
  int n, count = 0;

  std::cin >> n;

  for(; n > 0; --n)
  {
    int p, q;

    std::cin >> p >> q;

    if(q - p >= 2) count++;
  }

  std::cout << count << "\n";
}