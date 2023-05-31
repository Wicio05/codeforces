#include <iostream>

int main()
{
  int n, p, f;
  int count = 1;

  std::cin >> n >> p;

  for(int i = 1; i < n; ++i)
  {
    std::cin >> f;

    if(p != f) count++;

    p = f;
  }

  std::cout << count << "\n";
}