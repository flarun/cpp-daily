#include <iostream>
#include <memory>

int main()
{
  std::shared_ptr<int> ptr1 = std::make_shared<int>(42);

  {
    std::shared_ptr<int> ptr2 = ptr1; // Counter becomes 2
    std::cout << "Value: " << *ptr2 << " (Count: " << ptr1.use_count() << ")\n";
  } // ptr2 goes out of scope here. Counter drops back to 1

  std::cout << "Count after inner block: " << ptr1.use_count() << "\n";
} // ptr1 goes out of scope here. Counter hits 0, memory is deleted