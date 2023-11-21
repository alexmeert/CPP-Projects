#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>

class OvernightPackage : public Package
{
private:

double fee;

public:

  OvernightPackage(const std::string &_name, const std::string &_address, const std::string &_city, const std::string &_state, int _zip, double _weight, double _cost, double _fee);

  void setOvernightFeePerOunce(double _fee);

  double calculateCost() const;

  void printPackageInfo() const;


};

#endif
