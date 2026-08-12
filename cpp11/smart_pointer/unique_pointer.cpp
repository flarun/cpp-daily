#include <iostream>
#include <memory> // required for smart pointers

int main()
{
  std::cout << "Smart pointer with unique_ptr" << "\n";

  std::cout << "-- 1) basic test with normal pointer and auto pointer --" << "\n";

  int value = 5;
  int auto_value = 6;

  // std::make_unique<T>() returns a pointer to the value of type T we pass to it
  std::unique_ptr<int> ptr = std::make_unique<int>(value);
  auto auto_ptr = std::make_unique<int>(auto_value);

  std::cout << "The value is: " << *ptr << "\n";
  std::cout << "The value of the auto_ptr is: " << *auto_ptr << "\n";

  std::cout << "-- 2) moving, tranferring the pointer --" << "\n";

  std::unique_ptr<int> source_ptr = std::make_unique<int>(10);
  std::cout << "The value of source_ptr is: " << *source_ptr << "\n";
  std::cout << "source_ptr -> (std::move) -> dest_ptr" << "\n";

  std::unique_ptr<int> dest_ptr = std::move(source_ptr);
  std::cout << "The value of dest_ptr is: " << *dest_ptr << "\n";
  if (source_ptr == nullptr)
  {
    std::cout << "As expected, source_ptr is now empty (nullptr)!\n";
  }

  std::cout << "-- 3) modify held value --" << "\n";

  *ptr = 20;
  std::cout << "The value is: " << *ptr << "\n";

  std::cout << "-- 4) arrays --" << "\n";
  auto arr = std::make_unique<int[]>(5);
  arr[0] = 10; // Use normal array syntax
  std::cout << "The value of arr[0]: " << arr[0] << "\n";

  return 0;
}
