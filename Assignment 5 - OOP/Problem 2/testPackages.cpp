#include "Package.h"
#include "Package.cpp"
#include "TwoDayPackage.h"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.h"
#include "OvernightPackage.cpp"

#include <iomanip>

using namespace std;

int main()
{

Package p1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 10.5, 0.4);
p1.printPackageInfo();

TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
p2.printPackageInfo();

OvernightPackage p3("Don Kelly", "9 Main St", "Denver", "CO", 6666, 12.25, 0.7, 0.25);
p3.printPackageInfo();

Package p4("John Doe", "22 Main St", "Gainesville", "FL", 6253, 0, 0);
p4.printPackageInfo();

}
