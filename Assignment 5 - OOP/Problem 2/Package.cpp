#include "Package.h"

#include <iostream>
#include <iomanip> //for decimal precision

int Package::id = 1;

Package::Package(const std::string &_name, const std::string &_address, const std::string &_city, const std::string &_state, int _zip, double _weight, double _cost)
{
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  zip = _zip;
  setWeight(_weight);
  setCostPerOunce(_cost);

  packageID = id++;
}

void Package::setWeight(double _weight)
{
  if(_weight > 0)
  {
    weight = _weight;
  }
  else
  {
    std::cout << "Package weight must be positive, setting weight to zero." << std::endl;
    weight = 0;
  }
}

void Package::setCostPerOunce(double _cost)
{
  if(_cost > 0)
  {
    cost = _cost;
  }
  else
  {
    std::cout << "Package cost per ounce must be positive, setting cost to zero." << std::endl;
    cost = 0;
  }
}

double Package::calculateCost() const
{
  return weight * cost;
}

void Package::printPackageInfo() const
{
  std::cout << "-----------------------------------------------------------" << std::endl;
  std::cout << "Package ID: " << packageID << std::endl << std::endl;
  std::cout << name << std::endl;
  std::cout <<  address << std::endl;
  std::cout << city << ", " << state << " " << zip << std::endl << std::endl;
  std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
  std::cout << "-----------------------------------------------------------" << std::endl;
}
