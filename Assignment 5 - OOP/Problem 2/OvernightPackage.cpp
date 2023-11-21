#include "OvernightPackage.h"
#include <iomanip> //for decimal precision

OvernightPackage::OvernightPackage(const std::string &_name, const std::string &_address, const std::string &_city, const std::string &_state, int _zip, double _weight, double _cost, double _fee) :  Package(_name, _address, _city, _state, _zip, _weight, _cost)
{
  setOvernightFeePerOunce(_fee);
}

void OvernightPackage::setOvernightFeePerOunce(double _fee)
{
  if(_fee > 0)
  {
    fee = _fee;
  }
  else
  {
    std::cout << "Overnight fee must be greater than zero, setting fee to zero." << std::endl;
    fee = 0;
  }
}

double OvernightPackage::calculateCost() const
{
  return (cost+fee)*weight;
}

void OvernightPackage::printPackageInfo() const
{
  std::cout << "-----------------------------------------------------------" << std::endl;
  std::cout << "Overnight Package ID: " << packageID << std::endl << std::endl;
  std::cout << name << std::endl;
  std::cout <<  address << std::endl;
  std::cout << city << ", " << state << " " << zip << std::endl << std::endl;
  std::cout << "Cost: $" << std::fixed << std::setprecision(2) << calculateCost() << std::endl;
  std::cout << "-----------------------------------------------------------" << std::endl;
}
