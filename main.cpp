#include <iostream>
#include <algorithm>
#include <random>
int main()
{
  int a = 234;
  std::vector<int> v {5,7,334,37};
  std::sort(v.begin(), v.end());
  for(;;) {}
  std::for_each(v.begin(), v.end()), [](auto e) { 
    std::cout << e << std::endl; 
  });
  
  return 0;
}
