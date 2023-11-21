#ifndef TRIP_H
#define TRIP_H

#include <vector>
#include <string>
#include "Route.h" //we include the Route header file so we can access the class in our new Trip class


class Trip
{
private:
  std::vector<Route> routes;
  double totalTime, totalLength;
  std::string source, destination;

public:
  Trip(std::string _source, std::string _destination);

  std::string getSource() const; //these are all constant because we are not changing any members
  std::string getDestination() const;
  double getTotalTime() const;
  double getTotalLength() const;

  void setSource(std::string & _source); //strings should be passed by reference because they are objects in C++
  void setDestination(std::string & _destination);

  void addRoute(Route & _route); //passsing a Route object by reference to create a new route

  void removeRoute(); //not a constant member function because we are changing the vector

  double averageTime() const;

  void printInfo() const;

};

#endif
