#include <iostream>
#include <algorithm>
#include <random>
int main()
{
  
  std::random_device r;
  std::vector<int> v {5,7,334,37};
  std::sort(v.begin(), v.end(),r);
  
  std::for_each(v.begin(), v.end(), [](auto e) { 
    std::cout << e << std::endl; 
  });
  
  return 0;
}
