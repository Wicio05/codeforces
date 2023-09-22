#include <iostream>
#include <string>
 
int main() {
  std::string s;
  std::string hello = "hello";
  int flw = 0;
 
  std::cin >> s;
 
  for(int i = 0; i < s.length(); ++i) {
    if(s[i] == hello[flw]) {
      ++flw;
    }
  }
  
  std::cout << (flw == hello.length() ? "YES" : "NO");
}