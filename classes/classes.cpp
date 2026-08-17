#include <iostream>
#include <string>

class Car
{
private:
  std::string brand;
  int year;
  double fuel;

public:
  Car(std::string carBrand, int carYear)
  {
    brand = carBrand;
    year = carYear;
    fuel = 100.0;
  }

  void drive(double distance)
  {
    double fuelNeeded = distance * 0.5;
    if (fuel >= fuelNeeded)
    {
      fuel -= fuelNeeded;
      std::cout << "Driving " << distance << " km." << std::endl;
    }
    else
    {
      std::cout << "Not enough fuel to drive." << std::endl;
    }
  }

  void refuel(double amount)
  {
    fuel += amount;
    if (fuel > 100.0)
    {
      fuel = 100.0;
    }
    std::cout << "Refueled. Current fuel level: " << fuel << "%" << std::endl;
  }

  void displayStatus()
  {
    std::cout << year << " " << brand << " | Fuel: " << fuel << "%" << std::endl;
  }
};

int main()
{
  Car myCar("Toyota", 2022);

  myCar.displayStatus();
  myCar.drive(50.0);
  myCar.displayStatus();
  myCar.drive(200.0);
  myCar.refuel(30.0);
  myCar.displayStatus();

  return 0;
}
