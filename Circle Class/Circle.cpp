#include "Circle.h"

using namespace std;

Circle::Circle()
{
  radius = 1;
}

Circle::Circle(double _radius)
{
  radius = _radius;
}

double Circle::getRadius()
{
  return radius;
}

void Circle::setRadius(double _radius)
{
  radius = _radius;
}

double Circle::getArea()
{
  return radius*radius*3.1415;
}
