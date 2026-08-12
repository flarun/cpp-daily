#include <iostream>
#include <memory>

int main()
{
  std::shared_ptr<int> shared = std::make_shared<int>(100);
  std::weak_ptr<int> weak = shared; // Points to the memory, but count stays at 1

  // To use it, you must "lock" it to create a temporary shared_ptr
  if (std::shared_ptr<int> temporaryShared = weak.lock())
  {
    std::cout << "Memory is still alive: " << *temporaryShared << "\n";
  }
}
