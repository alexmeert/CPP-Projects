#include "Trip.h"
#include <iostream>

Trip::Trip(std::string _source, std::string _destination)
{
  setSource(_source);
  setDestination(_destination);
  totalTime = 0;
  totalLength = 0;
}

std::string Trip::getSource() const
{
  return source;
}
std::string Trip::getDestination() const
{
  return destination;
}
double Trip::getTotalTime() const
{
  return totalTime;
}
double Trip::getTotalLength() const
{
  return totalLength;
}

void Trip::setSource(std::string & _source)
{
  source = _source;
}
void Trip::setDestination(std::string & _destination)
{
  destination = _destination;
}

void Trip::addRoute(Route & _route)
{
  routes.push_back(_route);
  totalTime = totalTime + _route.getTime(); //updating the total time for the trip with the new route
  totalLength = totalLength + _route.getLength();
}

void Trip::removeRoute()
{
  totalTime = totalTime - routes[routes.size() - 1].getTime();
  totalLength = totalLength - routes[routes.size() - 1].getLength();
  routes.pop_back();
}

double Trip::averageTime() const
{
  return totalTime/totalLength;
}

void Trip::printInfo() const
{
  std::cout << "Source:         " << source << std::endl;
  std::cout << "Destination:    " << destination << std::endl;
  std::cout << "Total Length:   " << totalLength << std::endl;
  std::cout << "Total Time:     " << totalTime << std::endl << std::endl;

  std::cout << "Routes:  " << std::endl;

  for(int i = 0; i < routes.size(); i++)
  {
    std::cout << "Route " << i << ": "<< routes[i].getLength() << " miles and " << routes[i].getTime() << " minutes" << std::endl;
  }
}
