#include <iostream>
#include <vector>
#include <ranges>


int main()
{
  std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // take numbers, filter out odd ones, square the evens
  auto results = numbers | std::views::filter([](int n)
                                              { return n % 2 == 0; }) |
                 std::views::transform([](int n)
                                       { return n * n; });

  for (int n : results)
  {
    std::cout << n << " ";
  }
}
