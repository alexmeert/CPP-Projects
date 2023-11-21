#include <iostream>
#include "Trip.h"
#include "Trip.cpp"
#include "Route.cpp"

int main()
{

  std::string source = "Lakeland";
  std::string destination = "Orlando";

  Trip myTrip(source, destination);

  Route r0(8, 1.6);
  Route r1(27.5, 22);
  Route r2(5, 3.2);

  myTrip.addRoute(r0);
  myTrip.addRoute(r1);
  myTrip.addRoute(r2);

  myTrip.printInfo();

  myTrip.removeRoute();




}
