#include <iostream>
#include <concepts>
#include <string>

template <typename T>
concept Addable = requires(T a, T b) {
  { a + b } -> std::convertible_to<T>;
};

template <Addable T>
T add(T a, T b)
{
  return a + b;
}

template <std::integral T>
T multiply_integers(T a, T b)
{
  return a * b;
}

int main()
{
  std::cout << "--- C++20 CONCEPTS TEST ---\n\n";

  std::cout << "Integer addition: " << add(10, 20) << '\n';

  std::string s1 = "Hello, ";
  std::string s2 = "World!";
  std::cout << "String addition: " << add(s1, s2) << '\n';

  std::cout << "Integer multiplication: " << multiply_integers(5, 4) << '\n';

  return 0;
}