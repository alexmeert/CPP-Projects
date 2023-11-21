#include "Circle.h"

Circle::Circle()
{
  radius = 1;
  area = getArea();
  perimeter = getPerimeter();
}

Circle::Circle(double _radius)
{
  setRadius(_radius);
  area = getArea();
  perimeter = getPerimeter();
  setColor("Red");
  setFilled(false);
}

Circle::Circle(double _radius, const std::string &_color, bool _filled) : GeometricObject(_color, _filled)
{
  setRadius(_radius);
  area = getArea();
  perimeter = getPerimeter();
}

void Circle::setRadius(double _radius)
{
  if(_radius > 0)
    radius = _radius;
}

double Circle::getRadius() const
{
  return radius;
}

double Circle::getArea() const
{
  return radius*radius*3.1415;
}

double Circle::getPerimeter() const
{
  return 2*radius*3.1415;
}

//Redefine the function
std::string Circle::toString() const
{
  return "Circle Object";
}
