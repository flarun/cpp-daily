#include <iostream>
#include <memory>

class Tester
{
public:
  // Constructor (Runs when created)
  Tester()
  {
    std::cout << "Object CREATED on the heap.\n";
  }

  // Destructor (Runs when deleted)
  ~Tester()
  {
    std::cout << "Object DESTROYED and memory freed!\n";
  }
};

int main()
{
  std::cout << "--- Outer Scope Starts ---\n";

  { // <-- This opening brace creates an "Inner Scope"
    std::cout << "  Entering Inner Scope...\n";

    // Create the unique_ptr inside this inner block
    std::unique_ptr<Tester> ptr = std::make_unique<Tester>();

    std::cout << "  Leaving Inner Scope...\n";
  } // <-- ptr goes out of scope HERE. Watch what happens!

  std::cout << "--- Outer Scope Ends ---\n";
  return 0;
}
