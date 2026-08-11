#include <iostream>
#include <string>

// template keyword with <> can also be written inline
// basic function template
template <typename T>
T add(T first, T second)
{
  return first + second;
}

// template with a default type parameter
template <typename T = int>
T square(T x)
{
  return x * x;
}

// full template specialization
template <typename T>
struct Describer
{
  static void describe(const T &value)
  {
    std::cout << "Generic value: " << value << "\n";
  }
};

// specialization for bool
template <>
struct Describer<bool>
{
  static void describe(const bool &value)
  {
    std::cout << "Boolean value: " << (value ? "true" : "false") << "\n";
  }
};

// class template with 2 parameters
template <typename K, typename V>
class Pair
{
public:
  Pair(K key, V value) : key_(key), value_(value) {};
  void print() const
  {
    std::cout << key_ << " -> " << value_ << "\n";
  }

private:
  K key_;
  V value_;
};

// template function with template class parameter
template <typename T>
class Box
{
public:
  explicit Box(T value) : value_(value) {}
  T get() const { return value_; }

private:
  T value_;
};

template <typename T>
void printBoxLike(const T &container)
{
  std::cout << "Container holds: " << container.get() << "\n";
}