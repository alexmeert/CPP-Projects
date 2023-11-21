#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>

class TwoDayPackage : public Package
{
private:

double fee;

public:

  TwoDayPackage(const std::string &_name, const std::string &_address, const std::string &_city, const std::string &_state, int _zip, double _weight, double _cost, double _fee);

  void setFlatFee(double _fee);

  double calculateCost() const;

  void printPackageInfo() const;

};

#endif
