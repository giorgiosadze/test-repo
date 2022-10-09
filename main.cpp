#include <iostream>
#include <algorithm>
#include <random>
int main()
{
  std::vector<int> v {5,7,334,37};
  
  std::sort(v.begin(), v.end());
  
  std::for_each(v.begin(), v.end()), [](auto e) { 
    std::cout << e << std::endl; 
  }); 
  return 0;
}
