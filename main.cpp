#include <iostream>
#include <ranges>
#include <random>
int main()
{
  
  std::random_device r;
  std::vector<int> v {5,7,334,37};
  std::ranges::sort(v,r);
  
  std::ranges::for_each(v, [](auto e) { std::cout << e << std::endl; });
  
  return 0;
}
