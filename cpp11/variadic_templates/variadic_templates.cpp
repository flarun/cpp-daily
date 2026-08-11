#include <iostream>
#include <string>

// base case
void printAll()
{
  std::cout << "\n";
}

// recursive case
template <typename First, typename... Rest>
void printAll(First first, Rest... rest)
{
  std::cout << first << " ";
  printAll(rest...);
}

