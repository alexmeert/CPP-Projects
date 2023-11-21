#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package
{
protected:

  std::string name;
  std::string address;
  std::string city;
  std::string state;
  int zip, packageID;
  double weight;
  double cost; //cost per ounce

public:
  static int id;

  Package(const std::string &_name, const std::string &_address, const std::string &_city, const std::string &_state, int _zip, double _weight, double _cost);

  void setWeight(double _weight);

  void setCostPerOunce(double _cost);

  double calculateCost() const;

  void printPackageInfo() const;
};



#endif
