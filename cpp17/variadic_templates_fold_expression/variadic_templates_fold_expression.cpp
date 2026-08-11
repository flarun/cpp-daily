#include <iostream>
#include <string>

template <typename... Args>
auto sumAll(Args... args)
{
  return (args + ...)
}